class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size() - 1, k = j;
        std::vector<int> answer(nums.size(), 0);
        
        while (i <= j) {
            int num1 = nums[i] * nums[i];
            int num2 = nums[j] * nums[j];
            
            if (num1 > num2) {
                answer[k] = num1;
                i++;
            } else {
                answer[k] = num2;
                j--;
            }
            
            k--;
        }
        
        return answer;
    }
};