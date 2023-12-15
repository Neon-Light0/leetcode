class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        std::unordered_map<std::string, std::string> map;
        
        for (std::size_t i = 0; i < paths.size(); i++){
            if (!map.contains(paths[i][0])){
                map[paths[i][0]] = paths[i][1];
            }
        }
        
        auto key = map.begin()->first;
        
        while (map.contains(key)){
            key = map[key];
        }
        
        return key;
    }
};