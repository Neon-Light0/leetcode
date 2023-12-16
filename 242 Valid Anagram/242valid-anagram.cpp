class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> map;
        if (s.size() != t.size()) return false;
        
        for (char c : s){
            if (map.contains(c)){
                map[c] += 1;
            } else {
                map[c] = 1;
            }
        }
        
        for (char c : t){
            if (map.contains(c) && map[c] > 0){
                map[c] -= 1;
            } else {
                return false;
            }
        }
        
        return true;
    }
};