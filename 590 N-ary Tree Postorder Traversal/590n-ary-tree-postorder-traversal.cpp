/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        std::vector<int> answer;
        std::stack<Node*> stack;
        stack.push(root);

        while (!stack.empty()){
            auto top = stack.top();
            stack.pop();

            if (!top) continue;

            for (int i = 0; i < top->children.size(); i++){
                if (top->children[i]){
                    stack.push(top->children[i]);
                }
            }

            answer.push_back(top->val);
        }
        
        std::reverse(answer.begin(), answer.end());
        return answer;
    }
};