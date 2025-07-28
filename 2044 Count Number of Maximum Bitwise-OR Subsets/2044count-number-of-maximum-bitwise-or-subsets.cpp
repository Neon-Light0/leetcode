class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int res = 0;
        int len = nums.size();
        int curMax = INT_MIN;

        for (int i = 0; i < (1 << len); i++){
            int num = 0;

            for (int j = 0; j < len; j++){
                if ( ((i >> j) & 1) == 1){
                    num |= nums[j];
                }
            }

            if (num > curMax){
                curMax = num;
                res = 1;
            } else if (num == curMax){
                res += 1;
            }
        }

        return res;
    }
};