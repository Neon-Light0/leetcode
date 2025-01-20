class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i - 1];
        }

        double maxAverage = INT_MIN;

        for (int i = 0; i < nums.size() - k + 1; i++){
            int left = i == 0 ? 0 : nums[i - 1];
            int right = nums[i + k - 1];

            maxAverage = std::max(maxAverage, (right - left) / (double) k);
        }

        return maxAverage;
    }
};