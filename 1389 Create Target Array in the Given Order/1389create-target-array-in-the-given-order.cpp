class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        std::vector<int> answer;
        
        for (std::size_t i = 0; i < nums.size(); i++){
            answer.insert(answer.begin() + index[i], nums[i]);
        }
        
        return answer;
    }
};