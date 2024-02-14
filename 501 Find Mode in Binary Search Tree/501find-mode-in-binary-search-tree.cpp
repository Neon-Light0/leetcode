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
    vector<int> findMode(TreeNode* root) {
        std::vector<int> answer;
        std::unordered_map<int, int> counts;
        std::stack<TreeNode*> visited;
        visited.push(root);
        
        
        while (!visited.empty()){
            TreeNode* curNode = visited.top();
            visited.pop();
            
            if (!curNode) continue;
            
            counts[curNode->val] += 1;
            
            visited.push(curNode->left);
            visited.push(curNode->right);
        }
        
        int largest = INT_MIN;
        
        for (auto& [key, val] : counts){
            if (val > largest){
                largest = val;
            }
        }
        
        for (auto& [key, val] : counts){
            if (val == largest ){
                answer.push_back(key);       
            }
        }
        
        return answer;
    }
};