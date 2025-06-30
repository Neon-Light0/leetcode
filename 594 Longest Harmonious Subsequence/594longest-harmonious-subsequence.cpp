class Solution {
public:
    int findLHS(vector<int>& nums) {
        std::unordered_map<int, int> freq;

        for (int& num : nums){
            freq[num] += 1;
        }

        int res = 0;

        for (auto& [num, count] : freq){
            if (freq.contains(num + 1)){
                res = std::max(res, freq[num] + freq[num + 1]);
            }
        }

        return res;
    }
};