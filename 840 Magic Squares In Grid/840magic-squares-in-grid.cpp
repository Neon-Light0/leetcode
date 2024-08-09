class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;

        for (int i = 0; i + 2 < (int) grid.size(); i++){
            for (int j = 0; j + 2 < (int) grid[0].size(); j++){
                int found[9] = {0,0,0,0,0,0,0,0,0};
                bool badValueFound = false;

                std::cout << i << ", " << j << std::endl;
                std::cout << grid.size() - 3 << ", " << grid[0].size() - 3 << std::endl;

                for (int k = i; k < i + 3; k++){
                    for (int l = j; l < j + 3; l++){
                        if (grid[k][l] <= 9 && grid[k][l] > 0 && found[grid[k][l] - 1] == 0){
                            found[grid[k][l] - 1] = 1;
                        } else {
                            badValueFound = true;
                            break;
                        }
                    }

                    if (badValueFound) break;
                }

                if (badValueFound) continue;

                int row1 = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
                int row2 = grid[i+1][j] + grid[i+1][j + 1] + grid[i+1][j + 2];
                int row3 = grid[i+2][j] + grid[i+2][j + 1] + grid[i+2][j + 2];

                int col1 = grid[i][j] + grid[i+1][j] + grid[i+2][j];
                int col2 = grid[i][j+1] + grid[i+1][j+1] + grid[i+2][j+1];
                int col3 = grid[i][j+2] + grid[i+1][j+2] + grid[i+2][j+2];

                int diag1 = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
                int diag2 = grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];

                if (row1 == row2 && row2 == row3 && row3 == col1 && col1 == col2 && col2 == col3 && col3 == diag1 && diag1 == diag2){
                    count++;
                }
            }
        }

        return count;
    }
};