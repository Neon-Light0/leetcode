class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        int charSet[26];

        for (int i = 0; i < 26; i++){
            charSet[i] = 0;
        }

        for (auto& c : allowed){
            charSet[c - 'a'] = 1;
        }

        for (auto& word : words){
            int incre = 1;

            for (auto& c : word){
                if (charSet[c - 'a'] == 0){
                    incre = 0;
                    break;
                }
            }

            count += incre;
        }

        return count;
    }
};