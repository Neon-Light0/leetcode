class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0;
        int consecutiveL = 0;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == 'A'){
                countA += 1;
                consecutiveL = 0;
                if (countA >= 2) return false;
            } else if (s[i] == 'L'){
                if (consecutiveL > 0){
                    consecutiveL += 1;
                } else {
                    consecutiveL = 1;
                }

                if (consecutiveL >= 3) {
                    return false;
                }
            } else {
                consecutiveL = 0;
            }
        }

        return true;
    }
};