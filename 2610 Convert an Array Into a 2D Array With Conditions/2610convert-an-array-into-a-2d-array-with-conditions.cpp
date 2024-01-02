class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        std::vector<std::vector<int>> answer;
        std::unordered_map<int, int> map;
        
        for (auto& num : nums){
            if (map[num] >= answer.size()) {
                answer.push_back({});
            }
            
            answer[map[num]].push_back(num);
            map[num] += 1;
        }
        
        return answer;
    }
};