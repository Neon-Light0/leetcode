class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int answer = 0;

        for (int i = 0; i < 32; i ++){
            int count = 0;

            for (int j = 0; j < nums.size(); j++){
                if (nums[j] & 1 == 1){
                    count++;
                }

                nums[j] = nums[j] >> 1;
            }

            if (count >= k){
                answer += std::pow(2, i);
            }
        }

        return answer;
    }
};