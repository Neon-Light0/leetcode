class Solution {
private:
    int reverse(int num){
        int sum = 0;
        
        while (num > 0){
            int remain = num % 10;
            sum = sum * 10 + remain;
            num = num / 10;
        }

        return sum;
    }

public:
    bool sumOfNumberAndReverse(int num) {
        for (int i = num; i >= 0; i--){
            if (i + reverse(i) == num){
                return true;
            }
        }

        return false;
    }
};