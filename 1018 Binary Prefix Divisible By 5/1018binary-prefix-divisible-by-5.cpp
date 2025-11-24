class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        std::vector<bool> res;
        long long sum = 0;
        
        for (int i = 0; i < nums.size(); i++){
            sum = sum << 1;
            sum += nums[i];
            sum = sum % 5;

            res.push_back(sum == 0);
        }

        return res;
    }
};