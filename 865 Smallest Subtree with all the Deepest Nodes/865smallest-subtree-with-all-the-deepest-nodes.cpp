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
private:
    std::tuple<TreeNode*, int> helper(TreeNode* node, int depth){
        if (!node->left && !node->right) {
            return {node, depth};
        } else if (!node->right){
            return helper(node->left, depth + 1);
        } else if (!node->left){
            return helper(node->right, depth + 1);
        }

        auto [node1, depth1] = helper(node->left, depth + 1);
        auto [node2, depth2] = helper(node->right, depth + 1);

        if (depth1 == depth2) {
            return {node, depth1};
        } else if (depth1 > depth2){
            return {node1, depth1};
        } else {
            return {node2, depth2};
        }
    }

public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        auto [res, depth] = helper(root, 0);
        return res;
    }
};