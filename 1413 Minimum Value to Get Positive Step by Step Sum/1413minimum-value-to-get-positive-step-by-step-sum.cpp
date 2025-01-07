class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min = INT_MAX;
        int prev = 0;

        for (int i = 0; i < nums.size();i++){
            nums[i] += prev;
            min = std::min(min, nums[i]);
            prev = nums[i];
        }

        int diff = 1 - min;

        if (diff > 1){
            return diff;
        } else {
            return 1;
        }
    }
};