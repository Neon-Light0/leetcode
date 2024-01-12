class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1 = 0;
        int count2 = 0;
        
        for (std::size_t i = 0; i < s.size()/2; i++){
            char c = tolower(s[i]);
            
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                count1 += 1;
            }
        }
        
        for (std::size_t i = s.size()/2; i < s.size(); i++){
            char c = tolower(s[i]);
            
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                count2 += 1;
            }
        }
        
        return count1 == count2;
    }
};