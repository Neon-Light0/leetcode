class Solution {
public:
    string makeFancyString(string s) {
        std::string res;
        char prev1 = s[0] + 1;
        char prev2 = s[0] + 1;

        for (int i = 0; i < s.size(); i++){
            if (s[i] != prev1 || prev1 != prev2) {
                res += s[i];
                prev1 = prev2;
                prev2 = s[i];
            }
        }

        return res;
    }
};