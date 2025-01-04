class Solution {
public:
    int countPalindromicSubsequence(string s) {
        std::unordered_map<char, int> leftMap , rightMap;
        std::unordered_set<std::string> found;

        leftMap[s[0]] += 1;

        for (int i = 2; i < s.size(); i++){
            rightMap[s[i]] += 1;
        }

        for (int i = 1; i < s.size() - 1; i++){
            for (auto& [c, count] : leftMap){
                std::string seq;
                seq += c;
                seq += s[i];
                seq += c;

                if (rightMap.contains(c)){
                    found.insert(seq);
                }
            }
        
            leftMap[s[i]] += 1;

            if (rightMap.contains(s[i+1])){
                if (rightMap[s[i+1]] <= 1){
                    rightMap.erase(s[i+1]);
                } else {
                    rightMap[s[i+1]] -= 1;
                }
            }
        }

        return found.size();
    }
};