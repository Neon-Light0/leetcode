class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        std::vector<std::vector<int>> answer(img.size(), std::vector<int>(img[0].size(), 0));
        
        for (int i = 0; i < img.size(); i++){
            for (int j = 0; j < img[0].size(); j++){
                int sum = 0;
                int count = 0;
                    
                for (int k = i - 1; k < i + 2; k++){
                    for (int l = j - 1; l < j + 2; l++){
                        if (k < 0 || k > img.size() - 1 || l < 0 || l > img[0].size() - 1){
                            continue;
                        }
                        
                        count++;
                        sum += img[k][l];
                    }
                }
                
                sum = sum / count;
                answer[i][j] = sum;
            }
        }
        
        return answer;
    }
};