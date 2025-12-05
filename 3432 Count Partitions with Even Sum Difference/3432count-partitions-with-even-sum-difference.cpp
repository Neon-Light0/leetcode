class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;

        for (int i = 1; i < nums.size(); i++){
            int leftSum = 0, rightSum = 0;

            for (int j = 0; j < i; j++){
                leftSum += nums[j];
            }

            for (int j = i; j < nums.size(); j++){
                rightSum += nums[j];
            }

            if (((leftSum - rightSum) & 1) == 0){
                count += 1;
            }
        }

        return count;
    }
};