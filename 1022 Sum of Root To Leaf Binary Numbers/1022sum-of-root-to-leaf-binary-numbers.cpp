/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        int answer = 0;
        std::stack<std::pair<TreeNode*, int>> nodes;
        nodes.push(std::pair<TreeNode*, int>(root, 0));
        
        while (nodes.size()){
            int curVal = nodes.top().second + nodes.top().first->val;
            TreeNode* curNode = nodes.top().first;
            nodes.pop();
            
            if (curNode->left){
                nodes.push(std::pair<TreeNode*, int>(curNode->left, curVal << 1));
            }
            
            if (curNode->right){
                nodes.push(std::pair<TreeNode*, int>(curNode->right, curVal << 1));
            }
            
            if (!curNode->left && !curNode->right){
                answer += curVal;
            }
        }
        
        return answer;
    }
};