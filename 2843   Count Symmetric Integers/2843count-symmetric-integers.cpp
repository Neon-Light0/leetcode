class Solution {
private:
    bool isSymmetric(int num){
        std::string numStr = std::to_string(num);
        if (numStr.size() % 2 != 0) return false;

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < numStr.size() / 2; i++){
            sum1 += numStr[i] - '0';
            sum2 += numStr[numStr.size() - i - 1] - '0';
        }

        return sum1 == sum2;
    }

public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++){
            if (isSymmetric(i)){
                count += 1;
            }
        }

        return count;
    }
};