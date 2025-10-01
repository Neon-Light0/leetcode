class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for (std::size_t i = 0; i + 1 < nums.size(); i++){
            for (std::size_t j = 0; j + i + 1 < nums.size(); j++){
                nums[j] = (nums[j] + nums[j + 1]) % 10;
            }
        }

        return nums[0];
    }
};