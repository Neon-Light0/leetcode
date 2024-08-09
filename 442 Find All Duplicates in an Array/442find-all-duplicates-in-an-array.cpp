class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::vector<int> duplicates;
        
        for (int i = 0; i < nums.size(); i++){
            int index = std::abs(nums[i]) - 1;

            if (nums[index] > 0){
                nums[index] *= -1;
            } else {
                duplicates.push_back(std::abs(nums[i]));
            }
        }

        return duplicates;
    }
};