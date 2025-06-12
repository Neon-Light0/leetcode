class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int len = nums.size();
        int maxDiff = INT_MIN;

        for (int i = 0; i < len; i++){
            int next = (i + 1) % len;

            maxDiff = std::max(maxDiff, std::abs(nums[i] - nums[next]));
        }

        return maxDiff;
    }
};