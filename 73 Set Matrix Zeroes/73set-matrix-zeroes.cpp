class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        std::size_t n = matrix.size();
        std::size_t m = matrix[0].size();
        std::vector<bool> rowZeros(n, false);
        std::vector<bool> colZeros(m, false);

        for (std::size_t r = 0; r < n; r++){
            for (std::size_t c = 0; c < m; c++ ){
                if (matrix[r][c] == 0){
                    rowZeros[r] = true;
                    colZeros[c] = true;
                }
            }
        }

        for (std::size_t r = 0; r < n; r++){
            for (std::size_t c = 0; c < m; c++){
                if (rowZeros[r] || colZeros[c]){
                    matrix[r][c] = 0;
                }
            }
        }
    }
};