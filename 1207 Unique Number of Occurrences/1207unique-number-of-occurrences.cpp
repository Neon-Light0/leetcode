class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int, int> counts;
        std::unordered_set<int> set;
        
        for (auto& num : arr){
            counts[num] += 1;
        }
        
        for (auto& [key, val] : counts){
            if (set.contains(val)){
                return false;
            } else {
                set.insert(val);
            }
        }
        
        return true;
    }
};