class Solution {
public:
    int minLength(string s) {
        std::stack<char> stack;

        for (char& c : s){
            if (stack.empty()){
                stack.push(c);
                continue;
            }

            if ( (stack.top() == 'A' && c == 'B') || (stack.top() == 'C' && c == 'D') ){
                stack.pop();
            }  else {
                stack.push(c);
            }
        }

        return stack.size();
    }
};