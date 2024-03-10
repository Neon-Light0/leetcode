class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> answer;
        
        std::unordered_set<int> set1;
        std::unordered_set<int> set2;
        
        for (auto& num : nums1){
            set1.insert(num);
        }
        
        for (auto& num : nums2){
            set2.insert(num);
        }
        
        for (auto& num : set1){
            if (set2.contains(num)){
                answer.push_back(num);
            }
        }
        
        return answer;
    }
};