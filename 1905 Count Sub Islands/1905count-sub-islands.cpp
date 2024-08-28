class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int count = 0;
        int deltas[4][2] = {{0,1}, {0,-1}, {1, 0}, {-1, 0}};
        int rSize = grid2.size();
        int cSize = grid2[0].size();

        for (int r = 0; r < rSize; r++){
            for (int c = 0; c < cSize; c++){
                if (grid2[r][c] == 1){
                    std::queue<std::pair<int, int>> queue;
                    queue.push({r, c});
                    grid2[r][c] = 0;

                    bool isIsland = true;

                    while (!queue.empty()){
                        auto cur = queue.front();
                        queue.pop();

                        if (grid1[cur.first][cur.second] != 1){
                            isIsland = false;
                        }

                        for (auto& delta : deltas){
                            int newR = cur.first + delta[0];
                            int newC = cur.second + delta[1];

                            if (newR >=0 && newR < rSize && newC >= 0 && newC < cSize && grid2[newR][newC] == 1){
                                grid2[newR][newC] = 0;
                                queue.push({newR, newC});
                            }
                        }
                    }

                    if (isIsland){
                        count++;
                    }
                }
            }
        }

        return count;
    }
};