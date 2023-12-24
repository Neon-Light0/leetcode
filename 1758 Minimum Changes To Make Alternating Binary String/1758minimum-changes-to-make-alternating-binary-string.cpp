class Solution {
public:
    int minOperations(string s) {
        int count = 0;
        char c = '1';
        
        for (std::size_t i = 0; i < s.size(); i++){
            if (s[i] == c){
                count++;
                
                if (s[i] == '1'){
                    c = '0';
                } else {
                    c = '1';
                }
            } else {
                c = s[i];    
            }
        }
    
        return std::min(count, (int)s.size() - count);
    }
};