class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> map;
        
        for (std::size_t i = 0; i < nums.size(); i++){
            map[nums[i]] += 1;
        }
        
        for (auto& [key, val] : map){
            if (val > nums.size() / 2){
                return key;
            }
        }
        
        return -1;
    }
};