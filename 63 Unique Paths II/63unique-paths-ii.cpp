class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();

        for (int r = 0; r < n; r++){
            for (int c = 0; c < m; c++){
                if (r == 0 && c == 0){
                    if (obstacleGrid[r][c] == 1){
                        obstacleGrid[r][c] = 0;
                    } else {
                        obstacleGrid[r][c] = 1;
                    }
                    
                    continue;
                }

                if (obstacleGrid[r][c] == 1){
                    obstacleGrid[r][c] = 0;
                    continue;
                }

                int count = 0;

                if (r - 1 >= 0){
                    count += obstacleGrid[r - 1][c]; 
                }

                if (c - 1 >= 0){
                    count += obstacleGrid[r][c - 1]; 
                }

                obstacleGrid[r][c] = count;
            }
        }

        return obstacleGrid[n -  1][m - 1];
    }
};