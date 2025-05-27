class Solution {
public:
    int numSub(string s) {
        int count = 0;
        int mod = 1e9 + 7;
        long long ones = 0;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == '1'){
                ones += 1;
            } 
            
            if  (s[i] != '1' || i == s.size() - 1){
                count = (count + (ones * (ones + 1) /2)) % mod;  
                ones = 0;
            }
        }

        return count;
    }
};