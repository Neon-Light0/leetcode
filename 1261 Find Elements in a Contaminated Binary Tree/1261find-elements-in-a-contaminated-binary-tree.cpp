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
class FindElements {
private:
    TreeNode* root = nullptr;
    std::unordered_set<int> nums;
    void Recover(TreeNode* node, int x){
        if (!node) return;
        node->val = x;
        nums.insert(x);
        Recover(node->left, 2 * x + 1);
        Recover(node->right, 2 * x + 2);
    }

public:
    FindElements(TreeNode* root) {
        this->root = root;
        Recover(root, 0);
    }
    
    bool find(int target) {
        return nums.contains(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */