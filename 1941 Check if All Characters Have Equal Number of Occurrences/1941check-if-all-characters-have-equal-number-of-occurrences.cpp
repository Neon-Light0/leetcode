class Solution {
public:
    bool areOccurrencesEqual(string s) {
        std::unordered_map<char, int> m;

        for (char& c : s){
            m[c] += 1;
        }

        int curCount = -1;

        for (const auto& [c, count] : m){
            if (curCount < 0){
                curCount = count;
            } else if (count != curCount) {
                return false;
            }
        }

        return true;
    }
};