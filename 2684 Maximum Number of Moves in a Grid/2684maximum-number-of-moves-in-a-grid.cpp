class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int nRow = grid.size(), nCol = grid[0].size();
        std::vector<std::vector<int>> dp(nRow, std::vector<int>(nCol, 0));
        std::vector<std::vector<int>> directions = {{-1, 1}, {0, 1}, {1,1}};

        for (int c = 0; c < nCol - 1; c++){
            for (int r = 0; r < nRow; r++){
                for (int i = 0; i < directions.size(); i++){
                    int newR = r + directions[i][0];
                    int newC = c + directions[i][1];

                    if (newR >= 0 && newR < nRow && newC >= 0 && newC < nCol){
                        if (grid[r][c] < grid[newR][newC] && dp[r][c] >= c ){
                            dp[newR][newC] = std::max(dp[newR][newC], dp[r][c] + 1);
                        } else {
                            dp[newR][newC] = std::max(dp[newR][newC], dp[r][c]);
                        }
                    }
                }
            }
        }

        int answer = 0;

        for (int i = 0; i < nRow; i++){
            answer = std::max(answer, dp[i][nCol - 1]);
        }

        return answer;
    }
};