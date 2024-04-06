class Solution {
public:
    string makeGood(string s) {
        std::stack<char> cStack;
        
        for (char& c : s){
            if (!cStack.empty() && std::abs(c - cStack.top()) == 32 ) {
                cStack.pop();
            } else {
                cStack.push(c);
            }
        }
        
        std::string answer;
        
        while (!cStack.empty()){
            answer += cStack.top();
            cStack.pop();
        }
        
        std::reverse(answer.begin(), answer.end());
        
        return answer;
    }
};