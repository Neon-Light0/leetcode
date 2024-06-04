class Solution {
public:
    int longestPalindrome(string s) {
        std::unordered_map<char, int> map;
        
        for (char& c : s){
            map[c]++;
        }
        
        bool hasOdd = false;
        int n = 0;
        
        for (auto& [key, val] : map){
            if (val % 2 == 0){
                n += val;
            } else {
                n += val - 1;
                hasOdd = true;
            }
        }
        
        if (hasOdd) {
            return n + 1;
        } else {
            return n;
        }
    }
};