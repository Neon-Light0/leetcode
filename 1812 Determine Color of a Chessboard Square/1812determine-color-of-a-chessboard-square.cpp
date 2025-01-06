class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = coordinates[0] - 'a';
        int y = coordinates[1] - 1;

        if (y % 2 == 0){
            if (x % 2 == 0){
                return false;
            } 

            return true;
        } else {
            if (x % 2 == 0){
                return true;
            }

            return false;
        }
    }
};