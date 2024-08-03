class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::unordered_map<int, int> map;
        
        for (int& num : target){
            map[num] += 1;
        }
        
        for (int& num : arr){
            if (!map.contains(num) || map[num] == 0) return false;
            
            map[num] -= 1;
        }
        
        return true;
    }
};