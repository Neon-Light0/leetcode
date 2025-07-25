class Solution {
public:
    int minOperations(vector<int>& nums) {
        int nFlips = 0;

        for (int i = 0; i < nums.size(); i++){
            if ( (nums[i] + nFlips) % 2 == 0 ){
                nFlips += 1;
            }
        }

        return nFlips;
    }
};