class Solution {
public:
    string largestGoodInteger(string num) {
        char c = '.';

        for (int i = 0; i < num.size() - 2; i++){
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]){
                if (num[i] > c){
                    c = num[i];
                }
            }
        }
        std::stringstream ss;
        ss << c << c << c;

        if (c != '.') return ss.str();

        return "";
    }
};