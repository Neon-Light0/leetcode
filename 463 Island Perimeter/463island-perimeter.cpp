class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int answer = 0;
        int r = grid.size();
        int c = grid[0].size();
        
        for (std::size_t i = 0; i < r; i++){
            for (std::size_t j = 0; j < c; j++){
                if (grid[i][j] == 1){
                    int top, down, left, right;
                    
                    top = i - 1;
                    down = i + 1;
                    left = j - 1;
                    right = j + 1;
                    
                    if (top < 0 || grid[top][j] == 0) answer += 1;
                    if (down >= r || grid[down][j] == 0) answer += 1;
                    if (left< 0 || grid[i][left] == 0) answer += 1;
                    if (right >= c || grid[i][right] == 0) answer += 1;
                }
            }
        }
        
        return answer;
    }
};