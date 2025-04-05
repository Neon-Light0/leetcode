class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int nSubsets = 1 << n;
        int sum = 0;

        for (int i = 0; i < nSubsets; i++){
            int xorTotal = 0;

            for (int j = 0; j < n; j++){
                if (i & (1 << j)) {
                    xorTotal ^= nums[j];
                }
            }
            
            sum += xorTotal;
        }

        return sum;
    }
};