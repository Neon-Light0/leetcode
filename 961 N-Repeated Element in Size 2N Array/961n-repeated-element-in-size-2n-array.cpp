class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int num1 = nums[0], num2 = nums[1], num3 = nums[2];

        for (int i = 3; i < nums.size(); i++){
            if (nums[i] == num1 || nums[i] == num2 || nums[i] == num3){
                return nums[i];
            }

            num1 = nums[i-2];
            num2 = nums[i- 1];
            num3 = nums[i];
        }

        return -1;
    }
};