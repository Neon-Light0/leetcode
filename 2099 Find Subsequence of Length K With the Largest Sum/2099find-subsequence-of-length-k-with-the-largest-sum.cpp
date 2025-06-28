class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        std::vector<int> indices(nums.size());

        for (int i = 0; i < nums.size(); i++){
            indices[i] = i;
        }

        std::sort(indices.begin(), indices.end(), [&nums](int a, int b){
            return nums[a] > nums[b];
        });

        indices.resize(k);

        std::sort(indices.begin(), indices.end());

        std::vector<int> answer(k);

        for (int i = 0; i < indices.size(); i++){
            answer[i] = nums[indices[i]];
        }

        return answer;
    }
};