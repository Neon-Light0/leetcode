class Solution {
public:
    bool digitCount(string num) {
        std::unordered_map<char, int> m;

        for (char& c : num){
            m[c] += 1;
        }

        for (int i = 0; i < num.size(); ++i){
            if (m['0' + i] != num[i] - '0'){
                return false;
            }
        }

        return true;
    }
};