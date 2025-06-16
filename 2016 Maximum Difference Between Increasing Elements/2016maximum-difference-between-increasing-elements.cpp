class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int len = nums.size();
        int curMin = nums[0];
        int res = -1;
        
        for (auto& num : nums){
            if (num > curMin){
                res = std::max(res, num - curMin);
            }

            curMin = std::min(curMin, num);
        }

        return res;
    }
};