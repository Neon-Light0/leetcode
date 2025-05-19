class Solution {
private:
    int sumOfDigits(int num){
        int sum = 0;

        while (num > 0){
            int digit = num % 10;
            num /= 10;
            sum += digit;
        }

        return sum;
    }

public:
    int countLargestGroup(int n) {
        std::unordered_map<int, int> groups;
        int max = -1;

        for (int i = 1; i <= n; i++){
            int sum = sumOfDigits(i);
            groups[sum] += 1;
            max = std::max(max, groups[sum]);
        }

        int count = 0;

        for (auto& [key, val] : groups){
            if (val == max){
                count += 1;
            }
        }

        return count;
    }
};