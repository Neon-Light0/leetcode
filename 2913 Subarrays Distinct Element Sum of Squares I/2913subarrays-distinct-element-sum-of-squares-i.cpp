class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int answer = 0;

        for (int i = 0; i < nums.size(); i++){
            std::unordered_set<int> numSet;
            
            for (int j = i; j < nums.size(); j++){
                numSet.insert(nums[j]);

                answer += numSet.size() * numSet.size();
            }
        }

        return answer;
    }
};