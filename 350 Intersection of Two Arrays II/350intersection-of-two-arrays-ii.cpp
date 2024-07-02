class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> answer;
        std::unordered_map<int, int> map;
        
        for (auto& num : nums1){
            map[num] += 1;
        }
        
        for (auto& num : nums2){
            if (map.contains(num)){
                answer.push_back(num);
                
                if (map[num] > 1){
                    map[num] -= 1;
                } else {
                    map.erase(num);
                }
            }
        }
        
        return answer;
    }
};