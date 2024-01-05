class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        std::vector<int> results(nums.size(), 1);
        
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < i; j++){
                if (nums[j] < nums[i]){
                    results[i] = std::max(results[j] + 1, results[i]);
                }
            }
        }
        
        int maximum = 0;
        
        for (int result : results){
            maximum = std::max(maximum, result);
        }
        
        return maximum;
    }
};