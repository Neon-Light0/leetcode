class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        std::unordered_map<int, int> freq;
        int max = INT_MIN;
        int res = 0;

        for (const auto& num : nums){
            freq[num] += 1;

            if (freq[num] == max){
                res += max;
            } else if (freq[num] > max){
                max = freq[num];
                res = freq[num];
            }
        }

        return res;
    }
};