class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        std::vector<int> answer = {-1,-1};

        if (indexDifference >= nums.size()) return answer;

        for (int i = 0; i < nums.size(); i++){
            for (int j = i + indexDifference; j < nums.size(); j++){
                if (std::abs(nums[i] - nums[j]) >= valueDifference){
                    answer[0] = i;
                    answer[1] = j;
                    return answer;
                }
            }
        }

        return answer;
    }
};