class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> answer;
        
        for (int i = 0; i < grid.size() ; i++){
            for (int j = 0; j < grid[0].size() - 2; j++){
                grid[i][j] = std::max({grid[i][j], grid[i][j+1], grid[i][j+2]});
            }
        }
        
        for (int i = 0; i < grid.size() - 2 ; i++){
            vector<int> row;
            
            for (int j = 0; j < grid[0].size() - 2; j++){
                row.push_back(std::max({grid[i][j], grid[i+1][j], grid[i+2][j]}));
            }
            
            answer.push_back(row);
        }
        
        return answer;
    }
};