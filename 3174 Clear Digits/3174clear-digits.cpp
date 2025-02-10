class Solution {
public:
    string clearDigits(string s) {
        std::string answer = "";
        std::stack<char> stack;

        for (auto& c : s){
            if (c >= '0' && c <= '9'){
                if (!stack.empty()){
                    stack.pop();
                }
            } else {
                stack.push(c);
            }
        }

        while (!stack.empty()){
            answer = stack.top() + answer;
            stack.pop(); 
        }

        return answer;
    }
};