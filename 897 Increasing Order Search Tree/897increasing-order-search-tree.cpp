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
    TreeNode* increasingBST(TreeNode* root) {
        std::vector<TreeNode*> list;
        inOrderTranversal(root, list);

        for (int i = 0; i < list.size(); i++){
            list[i]->left = nullptr;

            if (i == list.size() - 1){
                list[i]->right = nullptr;
            } else {
                list[i]->right = list[i+1];
            }
        }

        return list[0];
    }

    void inOrderTranversal(TreeNode* node, std::vector<TreeNode*>& list){
        if (!node) return;

        inOrderTranversal(node->left, list);
        list.push_back(node);
        inOrderTranversal(node->right, list);
    }
};