class Solution {
public:
    bool isSameAfterReversals(int num) {
        std::string numStr = std::to_string(num);
        std::string numStr2 = "";
        int trailingIndex = numStr.size() - 1;

        for (int i = numStr.size() - 1; i >= 0; i--){
            if (numStr[i] == '0' && i == trailingIndex ){
                trailingIndex -= 1;
            } else {
                numStr2 = numStr[i] + numStr2;
            }
        }

        if (numStr2.size() == 0) numStr2 = "0";

        bool result = std::stoi(numStr2) == num;
        return result;
    }
};