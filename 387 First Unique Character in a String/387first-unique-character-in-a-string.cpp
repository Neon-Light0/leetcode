class Solution {
public:
    int firstUniqChar(string s) {
        std::vector<int> counts(26, 0);
        
        for (auto& c : s){
            counts[c - 'a'] += 1;
        }
        
        for (std::size_t i = 0; i < s.size(); i++){
            if (counts[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};