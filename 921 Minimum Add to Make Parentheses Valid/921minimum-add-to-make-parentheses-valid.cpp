class Solution {
public:
    int minAddToMakeValid(string s) {
        std::stack<char> parenStack;

        for (auto& c : s){
            if (!parenStack.empty()){
                char top = parenStack.top();
                if (top == '(' && c == ')'){
                    parenStack.pop();
                } else {
                    parenStack.push(c);
                }
            } else {
                parenStack.push(c);
            }
        }

        return parenStack.size();
    }
};