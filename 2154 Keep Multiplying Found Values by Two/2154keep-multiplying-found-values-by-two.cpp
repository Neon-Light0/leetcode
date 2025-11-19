class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        std::unordered_set<int> set(nums.begin(), nums.end());
        int cur = original;

        while (set.contains(cur)){
            cur *= 2;
        }

        return cur;
    }
};