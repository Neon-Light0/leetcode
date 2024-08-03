class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int count = nums[0] == 1 ? 1 : 0;

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == 1) count++;
            nums[i] += nums[i-1];
        }

        int curMax = 0;
        int leftVal = 0;
        int left = -1;

        for (int i = 0; i < nums.size(); i++){
            int right = (i + count - 1) % nums.size();
            int rightVal = nums[right];

            if (right >= left){
                curMax = std::max(curMax, rightVal - leftVal);
            } else {
                curMax = std::max(curMax, rightVal + nums[nums.size() - 1] - nums[left]);
            }
            
            left = i;
            leftVal = nums[left];
        }

        return count - curMax;
    }
};