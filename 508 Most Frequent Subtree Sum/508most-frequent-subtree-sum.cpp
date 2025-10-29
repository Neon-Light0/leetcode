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
    using mapDef = std::unordered_map<int, int>;
    int helper(TreeNode* node, mapDef& freq, int& maxFreq){
        if (!node) return 0;

        int sum = helper(node->left, freq, maxFreq) + helper(node->right, freq, maxFreq) + node->val;
        freq[sum] += 1;
        maxFreq = std::max(freq[sum], maxFreq);
        return sum; 
    }

public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        std::unordered_map<int, int> freq;
        int maxFreq = 0;
        helper(root, freq, maxFreq);
        
        std::vector<int> res;

        for (auto& [sum, count] : freq){
            if (count == maxFreq){
                res.push_back(sum);
            }
        }

        return res;
    }   
};