class Solution {
public:
    int minimumSum(int num) {
        int num1 = num % 10;
        int num2 = (num / 10) % 10;
        int num3 = (num / 100) % 10;
        int num4 = (num / 1000); 

        std::vector<int> arr = {num1, num2, num3, num4};
        std::sort(arr.begin(), arr.end());
        return arr[0] * 10 + arr[2] + arr[1] * 10 + arr[3];
    }
};