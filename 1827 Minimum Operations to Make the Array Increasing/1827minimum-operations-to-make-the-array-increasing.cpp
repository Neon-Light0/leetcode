class Solution {
public:
    int minOperations(vector<int>& nums) {
        int curMax = nums[0];
        int nOps = 0;

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == nums[i - 1]){
                nums[i] += 1;
                nOps += 1;
            } else if (nums[i] < nums[i - 1]){
                int diff = nums[i-1] - nums[i] + 1;
                nums[i] += diff;
                nOps += diff;
            }
        }

        return nOps;
    }
};