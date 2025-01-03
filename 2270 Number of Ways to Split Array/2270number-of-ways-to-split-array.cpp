class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long left = 0;
        long long right = 0;

        for (auto& num : nums){
            right += num;
        }

        int count = 0;

        for (int i = 1; i < nums.size(); i++){
            left += nums[i-1];
            right -= nums[i-1];

            if (left >= right){
                count++;
            } 
        }

        return count;
    }
};