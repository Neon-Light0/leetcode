class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();

        for (int i = 0, j = 0; i < n; i++, j++){
            sum += mat[i][j];
            sum += mat[i][n - j - 1];
        }

        if (mat.size() % 2 != 0){
            int mid = n / 2;
            sum -= mat[mid][mid];
        }
        
        return sum;
    }
};