class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.size() - 1;
        
        while (i > -1){
            if (num[i] != '0') break;
            
            i -= 1;
        }
        
        return num.substr(0, i + 1);
    }
};