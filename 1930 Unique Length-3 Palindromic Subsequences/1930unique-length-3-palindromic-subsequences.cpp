class Solution {
public:
    int countPalindromicSubsequence(string s) {
        std::unordered_set<char> chars;
        int count = 0;

        for (char& c : s){
            chars.insert(c);
        }

        for (auto& c : chars){
            int left = -1;
            int right = 0;

            for (int i = 0; i < s.size(); i++){
                if (c == s[i]){
                    if (left == - 1){
                        left = i;
                    }

                    right = i;
                }
            }

            std::unordered_set<char> betweenChars;

            for (int i = left + 1; i < right; i++){
                betweenChars.insert(s[i]);
            }

            count += betweenChars.size();
        }

        return count;
    }
};