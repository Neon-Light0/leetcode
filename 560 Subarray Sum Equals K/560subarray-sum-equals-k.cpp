class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int answer = 0;
        std::unordered_map<int, int> map;
        
        for (std::size_t i = 0; i < nums.size(); i++){
            sum += nums[i];
            
            if (sum == k) answer++;
            
            int diff = sum - k;
            
            if (map.contains(diff)){
                answer += map[diff];
            }
            
            map[sum] += 1;
        }
        
        return answer;
    }
};