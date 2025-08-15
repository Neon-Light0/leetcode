class Solution {
public:
    bool isPowerOfFour(int n) {
        int pos = -1;

        for (int i = 0; n > 0; i++){
            if ((n & 1) == 1){
                if (pos == -1) {
                    pos = i;
                } else {
                    return false;
                }
            }

            n = n >> 1;
        }

        if (pos >= 0){
            return pos % 2 == 0;
        } else {
            return false;
        }
    }
};