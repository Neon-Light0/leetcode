class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < m - 2; j++) {
                int found[9] = {0};
                bool doBreak = false;

                for (int k = 0; k < 3; k++){
                    for (int l = 0; l < 3; l++){
                        int r = i + k;
                        int c = j + l;

                        if (grid[r][c] < 1 || grid[r][c] > 9 || found[grid[r][c] - 1] >= 1){
                            doBreak = true;
                            break;
                        } else {
                            found[grid[r][c] - 1] += 1;
                        }
                    }

                    if (doBreak) break;
                }
                
                if (doBreak) continue;

                int firstRowSum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
                int secondRowSum = grid[i+1][j] + grid[i+1][j + 1] + grid[i+1][j + 2];
                int thirdRowSum = grid[i+2][j] + grid[i+2][j + 1] + grid[i+2][j + 2];

                int firstColSum = grid[i][j] + grid[i+1][j] + grid[i+2][j];
                int secondColSum = grid[i][j+1] + grid[i+1][j+1] + grid[i+2][j+1];
                int thirdColSum = grid[i][j+2] + grid[i+1][j+2] + grid[i+2][j+2];

                int firstDiagSum = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
                int secondDiagSum = grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];

                if (firstRowSum == secondRowSum && secondRowSum == thirdRowSum && thirdRowSum == firstColSum && firstColSum == secondColSum && 
                    secondColSum == thirdColSum && thirdColSum == firstDiagSum && firstDiagSum == secondDiagSum){
                        count += 1;
                    }
            }
        }

        return count;
    }
};