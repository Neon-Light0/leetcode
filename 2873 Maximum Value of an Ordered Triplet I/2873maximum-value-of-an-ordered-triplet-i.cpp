class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long max = 0;

        for (int i = 0; i < n - 2; i++){
            for (int j = i + 1; j < n - 1; j++){
                long long diff = nums[i] - nums[j];
                if (diff < 0) continue;

                for (int k = j + 1; k < n; k++){
                    max = std::max(max, diff * nums[k]);
                }
            }
        }

        return max;
    }
};