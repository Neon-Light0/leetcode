class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        std::vector<std::vector<int>> answer;
        
        for (int i = 0; i < land.size(); i++){
            for (int j = 0; j < land[0].size(); j++){
                if (land[i][j] == 1){
                    int k = i;
                    
                    while (k < land.size() && land[k][j] == 1){
                        k++;
                    }
                    
                    int l = j;
                    
                    while (l < land[0].size() && land[i][l] == 1){
                        l++;
                    }
                    
                    for (int y = i; y < k; y++){
                        for (int x = j; x < l; x++){
                            land[y][x] = 0;
                        }
                    }
    
                    answer.push_back({i, j, k-1,l-1});
                }
            }
        }
        return answer;
    }
};