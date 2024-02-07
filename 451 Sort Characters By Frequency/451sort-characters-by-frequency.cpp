class Solution {
public:
    string frequencySort(string s) {
        std::unordered_map<char, int> counts;
        std::vector<std::pair<char, int>> countsArr;
        std::string answer;
        
        for (auto& c : s){
            counts[c] += 1;
        }
        
        for (auto& [key, val] : counts){
            countsArr.emplace_back(key, val);
        }
        
        std::sort(countsArr.begin(), countsArr.end(), [](const auto& a, const auto& b)->bool{
            return a.second > b.second;
        });
            
        for (auto& [key, val] : countsArr){
            for (std::size_t i = 0; i < val; i++){
                answer += key;
            }
        }     
        
        return answer;
    }
};