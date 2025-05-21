class Solution {
public:
    string removeDigit(string number, char digit) {
        std::string largest;

        for (int i = 0; i < number.size(); i++){
            char& c = number[i];
            std::string temp = "";

            if (c == digit){
                temp += number.substr(0, i);
                temp += number.substr(i + 1);

                if (temp > largest){
                    largest = temp;
                }    
            }
        }

        return largest;
    }
};