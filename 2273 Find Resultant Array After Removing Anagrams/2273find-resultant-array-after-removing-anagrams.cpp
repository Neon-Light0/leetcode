class Solution {
private:
    bool getIsAnagram(const std::string& word1, const std::string& word2){
        if (word1.size() != word2.size()) return false;

        int counts[26] = {0};

        for (const char& c : word1){
            counts[c - 'a'] += 1;
        }

        for (const char& c : word2){
            counts[c - 'a'] -= 1;
        }

        for (int i = 0; i < 26; i++){
            if (counts[i] != 0) return false;
        }

        return true;
    }   

public:
    vector<string> removeAnagrams(vector<string>& words) {
        std::vector<std::string> res;

        for (int i = words.size() - 1; i + 1 > 0 ; i--){
            int j = i - 1;

            if (i > 0){
                if (!getIsAnagram(words[i], words[j])){
                    res.push_back(words[i]);
                }
            } else {
                res.push_back(words[i]);
            }
        }   

        std::reverse(res.begin(), res.end());
        return res; 
    }
};