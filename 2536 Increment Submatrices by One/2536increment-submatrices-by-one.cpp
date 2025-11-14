class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));

        for (const auto& query : queries){
            for (std::size_t i = query[0]; i <= query[2]; i++){
                matrix[i][query[1]] += 1;

                if (query[3] + 1 != n){
                    matrix[i][query[3] + 1] -=1;
                }
            }
        }

        for (std::size_t i = 0; i < n; i++){
            for (std::size_t j = 1; j < n; j++){
                matrix[i][j] += matrix[i][j-1];
            }
        }

        return std::move(matrix);
    }
};