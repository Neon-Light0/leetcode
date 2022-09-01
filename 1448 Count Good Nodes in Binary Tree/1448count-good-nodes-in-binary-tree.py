# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def goodNodes(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        
        cur_max = float('-inf')
        
        def goodNodesHelper(n, m):
            if n == None:
                return 0
            
            if n.val >= m:
                return 1 + goodNodesHelper(n.left, max(m, n.val)) +  goodNodesHelper(n.right, max(m, n.val))
            else:
                return goodNodesHelper(n.left, max(m, n.val)) + goodNodesHelper(n.right, max(m, n.val))
            
        ans = goodNodesHelper(root, cur_max)
        
        print(ans)
        return ans
            