class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int sum = 0;
        std::vector<int> allNums;

        for (int i = 1; i < nums.size(); i++){
            nums[i] += nums[i-1];
        }

        int val1 = 0;
        int val2 = 0;

        for (int i = 0; i < nums.size(); i++){
            for (int j = i; j < nums.size(); j++){
                val2 = nums[j];

                allNums.emplace_back(val2 - val1);
            }

            val1 = nums[i];
        }

        std::sort(allNums.begin(), allNums.end());

        for (int i = left - 1; i < right; i++){
            sum = (sum + allNums[i]) % (int)(1e9 + 7);
        }

        return sum;
    }
};