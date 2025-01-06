class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min = INT_MAX;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == target){
                min = std::min(min, std::abs(i - start));
            }
        }

        return min;
    }
};