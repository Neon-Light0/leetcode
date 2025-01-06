class Solution {
private:
    bool isDigit(char c) {
        return c >= '0' && c <= '9';
    }

public:
    string replaceDigits(string s) {
        std::string answer = "";

        for (int i = 0; i < s.size(); i++){
            if (isDigit(s[i])){
                answer += 'a' + (( s[i-1] - 'a' + int(s[i] - '0')) % 26);
            } else {
                answer += s[i];
            }
        }

        return answer;
    }
};