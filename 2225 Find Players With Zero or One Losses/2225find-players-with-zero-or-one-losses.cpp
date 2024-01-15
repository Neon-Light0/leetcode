class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        std::vector<std::vector<int>> answer(2, std::vector<int>());
        std::map<int, int> counts;
        
        for (auto& match : matches){
            int& winner = match[0];
            int& loser = match[1];
            
            if (!counts.contains(winner)){
                counts[winner] = 0;
            }
            
            counts[loser] += 1;
        }
        
        for (auto& [key, val] : counts){
            if (val == 0){
                answer[0].push_back(key);
            } else if (val == 1){
                answer[1].push_back(key);
            } 
        }
        
        return answer;
    }
};