class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        std::size_t strongest = 0;
        
        for (std::size_t i = 1; i < grid.size(); i++){
            for (std::size_t j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1 && j == strongest) {
                    strongest = i;
                }
            }
        }
        
        return static_cast<int>(strongest);
    }
};