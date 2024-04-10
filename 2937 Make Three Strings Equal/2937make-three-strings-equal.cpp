class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        if (s1[0] != s2[0] || s2[0] != s3[0]) return -1;
        
        int minLength = std::min({s1.size(), s2.size(), s3.size()});
        int stopIndex = 0;
        
        for (std::size_t i = 0; i < minLength; i++){
            if (s1[i] != s2[i] || s2[i] != s3[i]){
                break;
            }
            
            stopIndex = i;
        }
        
        return (s1.size() - 1 - stopIndex) + (s2.size() - 1 - stopIndex) + (s3.size() - 1 - stopIndex); 
    }
};