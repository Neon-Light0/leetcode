class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        std::vector<int> answer(2);

        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if (map.contains(diff)){
                answer[0] = i;
                answer[1] = map[diff];
                return answer;
            }

            map[nums[i]] = i;
        }

        return answer;
    }
};