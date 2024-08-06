class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        std::unordered_map<int, int> freq;

        for (int& num : nums){
            freq[num] += 1;
        }

        std::sort(nums.begin(), nums.end(), [&freq](const int& num1, const int& num2){
            if (freq[num1] == freq[num2]) return num1 > num2;

            return freq[num1] < freq[num2];
        });

        return nums;
    }
};