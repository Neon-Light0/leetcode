class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        int count2 = 0;

        for (int i = 0; i < n; i++) {
            int j = m - 1 - count2;
            count += count2;

            while (j >= 0 && grid[i][j] < 0){
                count += 1;
                count2 += 1;
                j = m - 1 - count2;
            }
        }

        return count;
    }
};