class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score = 0;

        std::vector<int> indices(nums.size());

        for (int i = 0; i < nums.size(); i++){
            indices[i] = i;
        }

        std::stable_sort(indices.begin(), indices.end(), [&nums](const int& a, const int& b){
            return nums[a] < nums[b];
        });

        for (int i = 0; i < nums.size(); i++) {
            int mid = indices[i], left = indices[i] - 1, right = indices[i] + 1;
            
            if (nums[mid] > 0){
                score += nums[mid];
                nums[mid] = 0;

                if (left >= 0) nums[left] = 0;
                if (right < nums.size()) nums[right] = 0;
            }
        }

        return score;
    }
};