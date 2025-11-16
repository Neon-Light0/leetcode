class Solution {
public:
    int numSub(string s) {
        int res = 0;
        int ones = 0;
        int modulo = 1e9 + 7;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == '1'){
                ones += 1;
            } else {
                ones = 0;
            }

            res = res % modulo + ones;
        }

        return res;
    }
};