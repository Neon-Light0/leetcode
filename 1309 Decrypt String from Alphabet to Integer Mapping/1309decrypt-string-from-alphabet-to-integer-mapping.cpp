class Solution {
public:
    string freqAlphabets(string s) {
        std::string answer = "";

        for (int i = 0; i < s.size(); i++){
            int num;

            if (i > (s.size() - 2) || s[i+2] != '#'){
                num = s[i] - '0';
            } else {
                num = (s[i] - '0') * 10 + (s[i+1] - '0');
                i += 2;
            }
                
            answer += (char)('a' + num - 1);
        }

        return answer;

    }
};