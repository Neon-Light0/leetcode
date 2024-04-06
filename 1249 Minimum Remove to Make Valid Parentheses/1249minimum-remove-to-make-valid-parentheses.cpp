class Solution {
public:
    string minRemoveToMakeValid(string s) {
        std::string answer = "";
        std::stack<int> pStack;
        std::unordered_set<int> pSet;
        
        for (std::size_t i = 0; i < s.size(); i++){
            char& c = s[i];
            
            if (c == '('){
                pStack.push(i);
            } else if (c== ')'){
                if (!pStack.empty() && s[pStack.top()] == '('){
                    pStack.pop();
                } else {
                    pStack.push(i);
                }
            }
        }
        
        while (!pStack.empty()) {
            pSet.insert(pStack.top());
            pStack.pop();
        }
        
        for (std::size_t i = 0; i < s.size(); i++){
            if (!pSet.contains(i)){
                answer += s[i];
            }
        }
        
        return answer;
    }
};