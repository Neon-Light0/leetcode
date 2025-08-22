class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int left = INT_MAX, top = INT_MAX;
        int right = INT_MIN, bottom = INT_MIN;

        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1){
                    left = std::min(left, j);
                    right = std::max(right, j);
                    top = std::min(top, i);
                    bottom = std::max(bottom, i);
                }
            }
        }

        return (right - left + 1) * (bottom - top + 1);
    }
};