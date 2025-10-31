class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        std::unordered_set<int> set;
        std::vector<int> res;

        for (auto& num : nums){
            if (set.contains(num)) {
                res.emplace_back(num);
                continue;
            }

            set.insert(num);
        }

        return res;
    }
};