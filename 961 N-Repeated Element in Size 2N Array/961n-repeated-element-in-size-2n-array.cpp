class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        std::unordered_map<int, int> count;
        int n = nums.size() / 2;

        for (auto& num : nums){
            count[num] += 1;
        }

        for (auto [key, val] : count){
            if (val == n){
                return key;
            }
        }

         return -1;
    }
};