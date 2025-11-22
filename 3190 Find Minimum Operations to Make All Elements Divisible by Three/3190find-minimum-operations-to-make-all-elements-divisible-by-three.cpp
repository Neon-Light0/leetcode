class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;

        for (const auto& num : nums){
            if (num % 3){
                count += 1;
            }
        }

        return count;
    }
};