class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        std::vector<int> onesRow(grid.size(), 0);
        std::vector<int> onesCol(grid[0].size(), 0);
        
        for (std::size_t i = 0; i < grid.size(); i++){
            for (std::size_t j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1){
                    onesRow[i] += 1;
                    onesCol[j] += 1;
                }
            }
        }
        
        std::vector<std::vector<int>> answer(grid.size(), std::vector<int>(grid[0].size(), 0));
        
        for (std::size_t i = 0; i < grid.size(); i++){
            for (std::size_t j = 0; j < grid[0].size(); j++){
                answer[i][j] = onesRow[i] + onesCol[j] - (grid[0].size() - onesRow[i]) - (grid.size() - onesCol[j]);
            }
        }
        
        return answer;
    }
};