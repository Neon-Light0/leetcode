# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        answer = False

        def dfs(node, num):
            nonlocal answer
            if not node:
                return
            
            val = num + node.val

            if not node.left and not node.right and val == targetSum:
                answer = True
                return
            
            dfs(node.left, val)
            dfs(node.right, val)

        dfs(root, 0)

        return answer

        
                