class Solution {
public:
    string reverseWords(string s) {
        int len = s.size();
        int index = 0;
        char prev = ' ';

        for (int i = 0; i < len; i++){
            if ( (s[i] == ' ' && prev != ' ') || s[i] != ' '){
                s[index] = s[i];
                index++;
            }

            prev = s[i];
        }

        if (s[index - 1] == ' ') {
            s.resize(index - 1);
        } else {
            s.resize(index);
        }

        std::reverse(s.begin(), s.end());

        len = s.size();
        int left = 0, right = 0;

        for (int i = 0; i < len; i++){
            if (s[i] == ' ' || i == (len - 1)){
                right = i == (len - 1) ? i : i - 1;

                while (left < right){
                    char temp = s[left];
                    s[left] = s[right];
                    s[right] = temp; 
                    left += 1;
                    right -= 1;
                }

                left = i + 1;
            }
        }

        return s;
    }
};