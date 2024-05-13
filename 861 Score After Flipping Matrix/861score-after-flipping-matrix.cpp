class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        for (std::size_t i = 0; i < grid.size(); i++){
            if (grid[i][0] == 0){
                for (std::size_t j = 0; j < grid[i].size(); j++){
                    grid[i][j] = grid[i][j] == 1 ? 0 : 1;
                }
            }
        }
        
        for (std::size_t c = 1; c < grid[0].size(); c++){
            int count = 0;
            
            for (std::size_t r = 0; r < grid.size(); r++){
                if (grid[r][c] == 1) count++;
            }
            
            if (count < grid.size() - count){
                for (std::size_t r = 0; r < grid.size(); r++){
                    grid[r][c] = grid[r][c] == 1 ? 0 : 1;
                }
            }
        }
        
        int sum = 0;
        
        for (std::size_t r = 0; r < grid.size(); r++){
            for (std::size_t c = 0; c < grid[0].size(); c++){
                int curVal = grid[r][c] << (grid[0].size() - c - 1);
                sum += curVal;
            }
        }
        
        return sum;
    }
};