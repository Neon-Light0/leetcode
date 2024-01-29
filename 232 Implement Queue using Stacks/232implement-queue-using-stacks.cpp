class MyQueue {
private:
    std::stack<int> stack1;
    std::stack<int> stack2;
    
public:
    
    
    MyQueue() {
        
    }
    
    void push(int x) {
        while (!stack2.empty()){
            int val = stack2.top();
            stack2.pop();
            stack1.push(val);
        }
        
        stack1.push(x);
    }
    
    int pop() {
        while (!stack1.empty()){
            int val = stack1.top();
            stack1.pop();
            stack2.push(val);
        }
        
        int top = stack2.top();
        stack2.pop();
        return top;
    }
    
    int peek() {
        if (stack1.empty()){
            return stack2.top();
        } else {
            while (!stack1.empty()){
                int val = stack1.top();
                stack1.pop();
                stack2.push(val);
            }
            
            return stack2.top();
        }
    }
    
    bool empty() {
        return stack1.empty() && stack2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */