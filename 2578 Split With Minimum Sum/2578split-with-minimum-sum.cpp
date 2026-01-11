class Solution {
public:
    int splitNum(int num) {
        std::string numStr = std::to_string(num);
        std::sort(numStr.begin(), numStr.end());
        std::string numStr1, numStr2;

        for (int i = 0; i < numStr.size(); i++){
            if (i % 2 == 0){
                numStr1 += numStr[i];
            } else {
                numStr2 += numStr[i];
            }
        }

        return std::stoi(numStr1) + std::stoi(numStr2);
    }
};