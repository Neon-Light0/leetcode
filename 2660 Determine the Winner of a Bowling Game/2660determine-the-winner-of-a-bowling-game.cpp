class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1 = 0, score2 = 0;
        int multiplierUse = 0;
        
        for (std::size_t i = 0; i < player1.size(); i++){
            if (multiplierUse > 0){
                score1 += player1[i] * 2;
                multiplierUse -= 1;
            } else {
                score1 += player1[i];
            }
            
            if (player1[i] == 10){
                multiplierUse = 2;
            }
        }
        
        multiplierUse = 0;
        
        for (std::size_t i = 0; i < player2.size(); i++){
            if (multiplierUse > 0){
                score2 += player2[i] * 2;
                multiplierUse -= 1;
            } else {
                score2 += player2[i];
            }
            
            if (player2[i] == 10){
                multiplierUse = 2;
            }
        }
        
        if (score1 > score2){
            return 1;
        } else if (score1 < score2){
            return 2;
        } else {
            return 0;
        }
    }
};