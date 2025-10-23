class Solution {
public:
    bool hasSameDigits(string s) {
        std::string current = s;
        std::string temp;

        while (current.size() > 2){
            for (std::size_t i = 1; i < current.size(); i++){
                int num = ( static_cast<int>(current[i] - '0') + static_cast<int>(current[i - 1] - '0')) % 10;
                temp += static_cast<char>('0' + num);
            }

            current = temp;
            temp = "";
        }

        return current[0] == current[1];
    }
};