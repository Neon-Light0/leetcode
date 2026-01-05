class Solution {
public:
    int averageValue(vector<int>& nums) {
        int res = 0;
        int sum = 0;
        int count = 0;

        for (auto& num : nums){
            if (num % 6 == 0){
                sum += num;
                count += 1;
            }
        }

        if (count > 0) {
            res = sum / count;
        }

        return res;
    }
};