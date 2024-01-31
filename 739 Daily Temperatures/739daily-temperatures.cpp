class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::stack<int> s;
        std::vector<int> answer(temperatures.size(), 0);
        
        for (int i = 0; i < temperatures.size(); i++){
            while( !s.empty() && temperatures[s.top()] < temperatures[i]){
                answer[s.top()] = i - s.top();
                s.pop();
            }
            
            s.push(i);
        }
        
        return answer;
    }
};