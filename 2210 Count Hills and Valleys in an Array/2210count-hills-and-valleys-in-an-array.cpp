class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
        int j = 0;
        int prev = nums[0] - 1;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != prev) {
                nums[j] = nums[i];
                j += 1;
            } 

            prev = nums[i];
        }

        nums.resize(j);
        
        for (int i = 1; i + 1 < nums.size(); i++){
            if (nums[i-1] > nums[i] && nums[i+1] > nums[i]){
                count += 1;
            } else if (nums[i-1] < nums[i] && nums[i+1] < nums[i]){
                count += 1;
            }
        }

        return count;
    }
};