class Solution {
public:
    int maxSum(vector<int>& nums) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int res = 0;
        int min = INT_MIN;
        bool hasPositive = false;

        for (const auto& num : numSet){
            if (num > 0){
                res += num;
                hasPositive = true;
            } else {
                min = std::max(min, num);
            }
        }

        if (hasPositive) {
            return res;
        } else {
            return min;
        }
    }
};