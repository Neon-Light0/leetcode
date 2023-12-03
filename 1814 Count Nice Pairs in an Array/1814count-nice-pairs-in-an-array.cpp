class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int answer = 0;
        int mod = 1e9 + 7;
        std::unordered_map<int, int> numMap;

        for (std::size_t i = 0; i < nums.size(); i++){
            int num = nums[i] - rev(nums[i]);
            numMap[num] += 1;
            answer = (answer + numMap[num] - 1) % mod;
        }

        return answer;
    }

    int rev(int num){
        int reversedNumber = 0;

        while (num != 0) {
            int digit = num % 10;
            reversedNumber = reversedNumber * 10 + digit;
            num /= 10;
        }

        return reversedNumber;
    }
};