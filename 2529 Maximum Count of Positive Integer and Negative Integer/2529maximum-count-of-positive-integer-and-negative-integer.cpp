class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0, pos = 0;

        for (auto& num : nums){
            if (num > 0){
                pos += 1;
            } else if (num < 0){
                neg += 1;
            }
        }

        return std::max(neg, pos);
    }
};