class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int prev = INT_MIN;
        
        for (std::size_t i = 0; i < nums.size(); i++){
            if (nums[i] != prev){
                nums[count] = nums[i];
                count += 1;
            }
            
            prev = nums[i];
        }
        
        return count;
    }
};