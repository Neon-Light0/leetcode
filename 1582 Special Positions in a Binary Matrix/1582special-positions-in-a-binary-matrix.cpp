class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        std::vector<int> onesRow(mat.size(), 0);
        std::vector<int> onesCol(mat[0].size(), 0);
        
        for (std::size_t i = 0; i < mat.size(); i++){
            for (std::size_t j = 0; j < mat[0].size(); j++){
                if (mat[i][j] == 1){
                    onesRow[i] += 1;
                    onesCol[j] += 1;
                }
            }
        }
        
        int answer = 0;
        
        for (std::size_t i = 0; i < mat.size(); i++){
            for (std::size_t j = 0; j < mat[0].size(); j++){
                if (mat[i][j] == 1 && onesRow[i] == 1 && onesCol[j] == 1){
                    answer++;
                }                
            }
        }
        
        return answer;
    }
};