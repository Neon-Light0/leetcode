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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        std::vector<int> elements;
        std::queue<TreeNode*> queue;
        queue.push(root1);
        queue.push(root2);

        while (!queue.empty()){
            TreeNode* curNode = queue.front();
            queue.pop();

            if (!curNode) continue;

            elements.push_back(curNode->val);
            queue.push(curNode->left);
            queue.push(curNode->right);
        }

        std::sort(elements.begin(), elements.end());
        return elements;
    }
};