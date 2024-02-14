class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        std::vector<int> answer;
        std::queue<int> positives;
        std::queue<int> negatives;
        
        for (auto& num : nums){
            if (num > 0) {
                positives.push(num);
            } else {
                negatives.push(num);
            }
        }
        
        bool toggle = true;
        
        while (positives.size() || negatives.size()){
            if (toggle){
                answer.emplace_back(positives.front());
                positives.pop();
            } else {
                answer.emplace_back(negatives.front());
                negatives.pop();
            }
            
            toggle = !toggle;
        }
        
        return answer;
    }
};