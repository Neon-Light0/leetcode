class Solution {
public:
    int minimumLength(string s) {
        int len = s.size();

        int freq[26] = {0};

        for (char& c : s){
            freq[c - 'a'] += 1;
        }

        for (int i = 0; i < 26; i++){
            while (freq[i] >= 3) {
                len -= 2;
                freq[i] -= 2;
            }
        }

        return len;
    }

};