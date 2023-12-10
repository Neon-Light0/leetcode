class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        std::vector<vector<int>> transposeMatrix;
        
        for (std::size_t i = 0; i < matrix[0].size(); i++){
            transposeMatrix.emplace_back();
            
            for (std::size_t j = 0; j < matrix.size(); j++){
                transposeMatrix[i].emplace_back(matrix[j][i]);
            }
        }
        
        return transposeMatrix;
    }
};