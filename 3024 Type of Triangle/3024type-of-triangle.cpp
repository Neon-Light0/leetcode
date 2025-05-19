class Solution {
public:
    string triangleType(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::string type = "none";

        if (nums[0] + nums[1] <= nums[2]){
            return type;
        }

        if (nums[0] == nums[1] && nums[1] == nums[2]){
            type = "equilateral";
        } else if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]){
            type = "isosceles";
        } else if (nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[2]){
            type = "scalene";
        }

        return type;
    }
};