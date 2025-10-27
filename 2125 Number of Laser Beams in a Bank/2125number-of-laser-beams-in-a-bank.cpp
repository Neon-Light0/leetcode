class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        std::vector<int> count(bank.size());
        int answer = 0;
        int prev = -1;
        
        for (int i = 0; i < bank.size(); i++){
            for (int j = 0; j < bank[0].size(); j++){
                if (bank[i][j] == '1'){
                    count[i] += 1;
                }
            }
            
            if (count[i] != 0){
                if (prev != -1){
                    answer += count[prev] * count[i];
                } 
                
                prev = i;
            }
        }
        
        return answer;
    }
};