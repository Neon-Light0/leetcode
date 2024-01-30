class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> numStack;
        int num1, num2;
        
        for (auto& token : tokens){
            if (token == "+"){
                num1 = numStack.top();
                numStack.pop();
                
                num2 = numStack.top();
                numStack.pop();
                
                numStack.push(num1 + num2);
            } else if (token == "-") {
                num1 = numStack.top();
                numStack.pop();
                
                num2 = numStack.top();
                numStack.pop();
                
                numStack.push(num2 - num1);
            } else if (token == "*") {
                num1 = numStack.top();
                numStack.pop();
                
                num2 = numStack.top();
                numStack.pop();
                
                numStack.push(num1 * num2);
            } else if (token == "/") {
                num1 = numStack.top();
                numStack.pop();
                
                num2 = numStack.top();
                numStack.pop();
                
                numStack.push(num2 / num1);
            } else {
                numStack.push(std::stoi(token));
            }
        }
        
        return numStack.top();
    }
};