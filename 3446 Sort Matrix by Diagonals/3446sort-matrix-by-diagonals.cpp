class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < n; j++){
                for (int k = 0; k < m; k++){
                    int y = j + 1;
                    int x = k + 1;

                    if (y >= 0 && y < n && x >=0 && x < m){
                        if (k > j) {
                            if (grid[j][k] > grid[y][x]){
                                int temp = grid[j][k];
                                grid[j][k] = grid[y][x];
                                grid[y][x] = temp;
                            }
                        } else {
                            if (grid[j][k] < grid[y][x]){
                                int temp = grid[j][k];
                                grid[j][k] = grid[y][x];
                                grid[y][x] = temp;
                            }
                        }

                    }
                }
            }
        }

        return grid;
    }
};