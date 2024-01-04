class Solution {
public:
    int minOperations(vector<int>& nums) {
        int answer = 0;
        std::unordered_map<int, int> counts;
        
        for (int& num : nums){
            counts[num] += 1;
        }
        
        for (auto& [num, count] : counts){
            if (count == 1) return -1;
            
            answer += std::ceil((double)(count) / 3);
        }
        
        return answer;
    }
};