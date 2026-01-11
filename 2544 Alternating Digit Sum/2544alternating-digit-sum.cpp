class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        std::string nStr = std::to_string(n);

        for (int i = 0; i < nStr.size(); i++){
            if (i % 2 == 0){
                sum += nStr[i] - '0';
            } else {
                sum -= nStr[i] - '0';
            }
        }

        return sum;
    }
};