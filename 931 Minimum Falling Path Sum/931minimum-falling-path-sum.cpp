class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                int topLeft = j - 1 >= 0 ? matrix[i-1][j - 1] : INT_MAX;
                int top = matrix[i-1][j];
                int topRight = j + 1 < matrix[0].size() ? matrix[i-1][j+1] : INT_MAX;
                
                matrix[i][j] += std::min(std::min(topLeft, top), topRight);
            }
        }
        
        return *std::min_element(matrix[matrix.size() - 1].begin(), matrix[matrix.size() - 1].end());
    }
};