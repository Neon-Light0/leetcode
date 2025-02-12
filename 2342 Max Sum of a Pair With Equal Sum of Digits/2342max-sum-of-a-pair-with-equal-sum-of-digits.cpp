class Solution {
public:
    int maximumSum(vector<int>& nums) {
        std::unordered_map<int, int> map;
        int maxSum = -1;

        for (int i = 0; i < nums.size(); i++){
            int num = nums[i];
            int sum = 0;

            for (int num = nums[i]; num > 0; num /= 10){
                sum += num % 10;
            }

            if (map.contains(sum)){
                maxSum = std::max(maxSum, map[sum] + nums[i]);
            } 

            map[sum] = std::max(map[sum], nums[i]);
        }
        
        return maxSum;
    }
};