class Solution {
public:
    bool makeEqual(vector<string>& words) {
        std::unordered_map<char, int> map;
        
        for (std::string& word : words){
            for (char& c : word) {
                map[c] += 1;
            }
        }
        
        for (auto& keyVal : map){
            if (keyVal.second % words.size() != 0){
                return false;
            }
        }
        
        return true;
    }
};