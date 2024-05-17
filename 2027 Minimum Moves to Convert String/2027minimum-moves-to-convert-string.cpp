class Solution {
public:
    int minimumMoves(string s) {
        int answer = 0;
        
        for (int i = 0; i < s.size(); i++){
            if (s[i] == 'X'){
                answer++;
                
                s[i] = 'O';
                
                if (i+1 < s.size()){
                    s[i+1] = 'O';
                }
                
                if (i+2 < s.size()){
                    s[i+2] = 'O';
                }
                
            }
        }
        
        return answer;
    }
};