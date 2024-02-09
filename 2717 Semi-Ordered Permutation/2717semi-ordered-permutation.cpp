class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = size(nums);
        int one = -1;
        int last = -1;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                one = i;
            } else if (nums[i] == n){
                last = i;
            }
        }
        
        if (one > last){
            return one + n - last - 1 - 1;
        } else {
            return one + n - last - 1;
        }
    }
};