class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int mod = 7 + 1e9;
        long long count = 0;
        std::unordered_map<int, long long> seenLeft;
        std::unordered_map<int, long long> seenRight;

        for (int i = 1; i < nums.size(); i++){
            seenRight[nums[i]] += 1;
        }

        for (int i = 0; i < nums.size(); i++){
            if (seenLeft.contains(nums[i] * 2) && seenRight.contains(nums[i] * 2)){
                count = (count + seenLeft[nums[i] * 2] * seenRight[nums[i] * 2]) % mod;
            }

            seenLeft[nums[i]] += 1;

            if (i + 1 < nums.size()){
                seenRight[nums[i + 1]] -= 1;
            }
        }

        return static_cast<int>(count);
    }
};