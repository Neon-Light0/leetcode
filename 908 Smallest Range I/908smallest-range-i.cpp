class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max = INT_MIN;
        int min = INT_MAX;

        for (auto& num : nums){
            max = std::max(max, num);
            min = std::min(min, num);
        }

        return std::max(0, max - k - min - k);
    }
};