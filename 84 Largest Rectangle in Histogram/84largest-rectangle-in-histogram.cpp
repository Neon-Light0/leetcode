class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stack;
        heights.push_back(0);
        int size = heights.size();
        int ans = 0;
        for(int i = 0; i < size; i++){
            while(!stack.empty() && heights[stack.top()] > heights[i]){
                int h = heights[stack.top()];
                stack.pop();
                int w = i;
                if(!stack.empty()){
                    w = i - stack.top() - 1;
                }
                ans = max(ans, h * w);
            }
            stack.push(i);
        }
        return ans;
    }
};