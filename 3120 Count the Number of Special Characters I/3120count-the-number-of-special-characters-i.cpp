class Solution {
public:
    int numberOfSpecialChars(string word) {
        int counts[52];
        
        for (std::size_t i = 0; i < 52; i++){
            counts[i] = 0;
        }
        
        for (auto& c : word){
            if (c > 'Z'){
                counts[c - 'a'] += 1;
            } else {
                counts[c - 'A' + 26] += 1;
            }
        }
        
        int count = 0;
        
        for (std::size_t i = 0; i < 26; i++){
            if (counts[i] > 0 && counts[i + 26] > 0){
                count++;
            }
        }
        
        return count;
    }
};