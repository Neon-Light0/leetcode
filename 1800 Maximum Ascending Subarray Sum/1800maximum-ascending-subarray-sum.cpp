class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max = INT_MIN;
        int sum = 0;
        int prev = INT_MIN;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > prev){
                sum += nums[i];
                max = std::max(max, sum);
            } else {
                sum = nums[i];
            }

            prev = nums[i];
        }

        return max;
    }
};