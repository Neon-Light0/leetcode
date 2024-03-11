class Solution {
public:
    string customSortString(string order, string s) {
        std::unordered_map<char, int> priorityMap;
        
        for (std::size_t i = 0; i < order.size(); i++){
            priorityMap[order[i]] = i; 
        }
        
        std::sort(s.begin(), s.end(), [&priorityMap](const char& a, const char& b)->bool{
            return priorityMap[a] < priorityMap[b];
        });
            
        return s;    
    }
};