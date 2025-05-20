class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        std::vector<int> decrements(n, 0);

        for (int i = 0; i< queries.size(); i++){
            decrements[queries[i][0]] -= 1;

            if (queries[i][1] + 1 < n){
                decrements[queries[i][1] + 1] += 1;
            } 
        }

        int diff = 0;

        for (int i = 0; i < n; i++){
            diff += decrements[i];
            int val = std::max(0, nums[i] + diff);

            if (val != 0) return false;
        }

        return true;
    }
};