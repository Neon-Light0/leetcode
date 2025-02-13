class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<int> answer(nums.size());

        for (int i = 0; i < nums.size(); i += 2){
            int alice = nums[i], bob = nums[i + 1];
            answer[i] = bob;
            answer[i + 1] = alice;
        }

        return answer;
    }
};