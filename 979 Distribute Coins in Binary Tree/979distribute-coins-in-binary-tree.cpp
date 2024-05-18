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
    int distributeCoins(TreeNode* root) {
        int sum = 0;
        
        helper(root, sum);
        return sum;
    }
    
    int helper(TreeNode* node, int& sum){
        if (!node) return 0;
        
        int left = helper(node->left, sum);
        int right = helper(node->right, sum);
        
        int curVal = node->val + left + right;
        sum += std::abs(curVal - 1);
        
        return curVal - 1;
    }
};