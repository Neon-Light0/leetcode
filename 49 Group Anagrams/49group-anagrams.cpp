class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> map;
        std::vector<std::vector<std::string>> answer;
        
        for (auto& str : strs){
            std::string temp = str;
            std::sort(temp.begin(), temp.end());
            map[temp].emplace_back(str);
        }
        
        for (auto& [key, val] : map){
            answer.push_back(val);
        }
        
        return answer;
    }
};