class NeighborSum {
private:
    std::unordered_map<int, std::pair<int, int>> map;
    
public:
    NeighborSum(vector<vector<int>>& grid) {
        int diaDir[4][2] = {{-1,-1}, {-1,1}, {1,1}, {1,-1}};
        int adjDir[4][2] = {{-1,0}, {0,1}, {1,0}, {0,-1}};

        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[i].size(); j++){
                int sum = 0;

                for (int k = 0; k < 4; k++){
                    int r = i + diaDir[k][0];
                    int c = j + diaDir[k][1];

                    if (r >= 0 && r < grid.size() && c >= 0 && c < grid[i].size()){
                        sum += grid[r][c];
                    }
                }

                map[grid[i][j]].first = sum;
                sum = 0;

                for (int k = 0; k < 4; k++){
                    int r = i + adjDir[k][0];
                    int c = j + adjDir[k][1];

                    if (r >= 0 && r < grid.size() && c >= 0 && c < grid[i].size()){
                        sum += grid[r][c];
                    }
                }

                map[grid[i][j]].second = sum;
            }
        }
    }
    
    int adjacentSum(int value) {
        return map[value].second;
    }
    
    int diagonalSum(int value) {
        return map[value].first;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */