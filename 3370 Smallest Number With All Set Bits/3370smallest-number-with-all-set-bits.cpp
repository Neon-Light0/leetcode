class Solution {
public:
    int smallestNumber(int n) {
        int count = 0;
        int sum = 0;

        while (n != 0) {
            sum += 1 << count;
            n = n >> 1;
            count += 1;
        }

        return sum;
    }
};