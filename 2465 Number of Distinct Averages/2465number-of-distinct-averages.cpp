class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::unordered_set<float> set;
        
        for (std::size_t i = 0; i < nums.size() / 2; i++){
            set.insert((nums[i] + nums[nums.size() - i - 1]) / 2.0);
        }
        
        return set.size();
    }
};