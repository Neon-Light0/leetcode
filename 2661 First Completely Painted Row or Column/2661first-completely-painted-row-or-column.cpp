class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        std::vector<int> rowCount(m, 0);
        std::vector<int> colCount(n, 0);

        std::unordered_map<int, std::pair<int, int>> coords;

        for (int r = 0; r < m; r++){
            for (int c = 0; c < n; c++){
                coords[mat[r][c]] = {r, c};
            }
        }

        for (int i = 0; i < arr.size(); i++){
            auto [r, c] = coords[arr[i]];

            rowCount[r] += 1;
            colCount[c] += 1;

            if (rowCount[r] >= n || colCount[c] >= m){
                return i;
            }
        }

        return -1;
    }
};