class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.size() < k) return false;

        std::unordered_map<char, int> map;

        for (auto& c : s){
            map[c] += 1;
        }

        int odds = 0;

        for (auto& [key, val] : map){
            if (val % 2 != 0){
                odds += 1;

                if (odds > k) return false;
            }
        }
        
        return true;
    }
};