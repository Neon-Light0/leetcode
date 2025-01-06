class Solution {
public:
    string truncateSentence(string s, int k) {
        int words = 0;
        int end = 0;
        bool isEnd = true;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' '){
                words++;
            }

            if (words >= k){
                isEnd = false;
                end = i;
                break;
            }
        }

        if (isEnd) end = s.size();

        return s.substr(0, end);
    }
};