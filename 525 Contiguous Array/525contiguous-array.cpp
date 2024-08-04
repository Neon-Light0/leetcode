class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxCount = 0;
        std::unordered_map<int, int> map = {{0, -1}};
        int maxLen = 0;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] < 1) {
                nums[i] = nums[i] == 1 ? 1: -1;
            } else {
                nums[i] = nums[i] == 1 ? nums[i - 1] + 1 : nums[i - 1] - 1;
            }

            if (map.contains(nums[i])){
                maxLen = std::max(maxLen, i - map[nums[i]]);
            }

            if (!map.contains(nums[i])) map[nums[i]] = i;
        }

        return maxLen;
    }
};