class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        std::vector<int> answer(nums.size(), 0);

        for (auto& num : nums){
            if (num % 2 == 0){
                answer[left] = num;
                left++;
            } else {
                answer[right] = num;
                right--;
            }
        }

        return answer;
    }
};