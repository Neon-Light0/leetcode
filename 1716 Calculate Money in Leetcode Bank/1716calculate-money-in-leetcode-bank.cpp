class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;

        for (std::size_t i = 0; i < n; i++){
            sum += 1 + i / 7 + i % 7;
        }

        return sum;
    }
};