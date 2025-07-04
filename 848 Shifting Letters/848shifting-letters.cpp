class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int len = s.size();
        
        for (int i = len - 2; i >= 0; i--){
            shifts[i] += shifts[i + 1] % 26;
        }   

        std::string res = "";

        for (int i = 0; i < len; i++){
            res += 'a' + (( s[i] - 'a' + shifts[i]) % 26);
        }

        return res;
    }
};