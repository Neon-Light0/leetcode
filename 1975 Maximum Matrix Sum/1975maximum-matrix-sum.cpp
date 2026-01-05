class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int curMin = INT_MAX;
        long long res = 0;
        int negCount = 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                res += std::abs(matrix[i][j]);
                curMin = std::min(curMin, std::abs(matrix[i][j]));

                if (matrix[i][j] < 0) {
                    negCount += 1;
                }
            }
        }

        if (negCount % 2 == 0){
            return res;
        } else {
            return res - 2 * curMin;
        }
    }
};