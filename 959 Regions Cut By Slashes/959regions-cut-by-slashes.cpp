class Solution {
public:
    int regionsBySlashes(vector<string>& grid) {
        int count = 0;
        std::vector<std::vector<int>> expandedGrid(grid.size() * 3, std::vector<int>(grid[0].size() * 3, 0));

        for (int r = 0; r < grid.size(); r++){
            for (int c = 0; c < grid[0].size(); c++){
                int R = r * 3, C = c * 3;

                switch (grid[r][c]){
                    case '/':
                        expandedGrid[R][C+2] = 1;
                        expandedGrid[R+1][C+1] = 1;
                        expandedGrid[R+2][C] = 1;
                        break;
                    case '\\':
                        expandedGrid[R][C] = 1;
                        expandedGrid[R+1][C+1] = 1;
                        expandedGrid[R+2][C+2] = 1;
                        break;
                }
            }
        }

        for (int r = 0; r < expandedGrid.size();r++){
            for (int c = 0; c < expandedGrid[0].size(); c++){
                if (expandedGrid[r][c] == 0) {
                    count++;
                    fillRegion(expandedGrid, r, c);
                }
            }
        }

        return count;
    }

    void fillRegion(vector<std::vector<int>>& grid, int r, int c){
        std::queue<std::pair<int, int>> queue;
        grid[r][c] = 1;
        queue.push({r, c});

        while (!queue.empty()){
            auto coord = queue.front();
            queue.pop();
            
            for (int i = 0; i < 4; i++){
                int newR = coord.first, newC = coord.second;

                if (i == 0) {
                    newR += 1;
                } else if (i == 1){
                    newR -= 1;
                } else if (i==2) {
                    newC += 1;
                } else if (i==3){
                    newC -= 1;
                }

                if (newR >= 0 && newR < grid.size() && newC >= 0 && newC < grid[0].size() && grid[newR][newC] == 0){
                    grid[newR][newC] = 1;
                    queue.push({newR, newC});
                }
            }
        }
    }
};