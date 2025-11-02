class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        int res = 0;
        std::vector<std::vector<char>> grid(m, std::vector(n, 'C'));

        for (auto& guard : guards){
            int r = guard[0];
            int c = guard[1];
            grid[r][c] = 'G';
        }

        for (auto& wall : walls){
            int r = wall[0];
            int c = wall[1];
            grid[r][c] = 'W';
        }

        std::vector<std::vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        for (int r = 0 ; r < m; r++){
            for (int c = 0; c < n; c++){
                if (grid[r][c] == 'G'){
                    for (int i = 0; i < dir.size(); i++){
                        int newR = r + dir[i][0];
                        int newC = c + dir[i][1];

                        while (newR >= 0 && newR < m && newC >= 0 && newC < n && grid[newR][newC] != 'G' && grid[newR][newC] != 'W') {
                            grid[newR][newC] = 'S';
                            newR += dir[i][0];
                            newC += dir[i][1];
                        }
                    }
                }
            }
        }

        for (int r = 0 ; r < m; r++){
            for (int c = 0; c < n; c++){
                if (grid[r][c] == 'C') res += 1;
            }
        }

        return res;
    }
};