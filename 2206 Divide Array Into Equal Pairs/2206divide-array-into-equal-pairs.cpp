class Solution {
public:
    bool divideArray(vector<int>& nums) {
        std::unordered_set<int> seen;

        for (auto& num : nums){
            if (seen.contains(num)){
                seen.erase(num);
            } else {
                seen.insert(num);
            }
        }

        return seen.empty();
    }
};