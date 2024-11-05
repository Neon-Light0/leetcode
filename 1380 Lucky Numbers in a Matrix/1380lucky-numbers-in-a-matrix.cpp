class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        std::vector<int> answer;
        int n = matrix.size(), m = matrix[0].size();
        std::vector<int> rowMin(n, INT_MAX), colMax(m, INT_MIN);

        for (int r = 0; r < n; r++){
            for (int c = 0; c < m; c++){
                rowMin[r] = std::min(rowMin[r], matrix[r][c]);
                colMax[c] = std::max(colMax[c], matrix[r][c]);
            }
        }

        for (int r = 0; r < n; r++){
            for (int c = 0; c < m; c++){
                if (matrix[r][c] == rowMin[r] && matrix[r][c] == colMax[c]){
                    answer.emplace_back(matrix[r][c]);
                }
            }
        }

        return answer;
    }
};