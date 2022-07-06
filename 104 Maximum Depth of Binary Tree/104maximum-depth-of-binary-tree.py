# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        
        queue = []
        depth = 0
        
        if root != None:
            queue.append(root)
        
        
        while queue:
            depth += 1
            ln = len(queue)
            
            for i in range(ln):
                temp = queue[0]
                queue.pop(0)
                
                if temp.left != None:
                    queue.append(temp.left)
                if temp.right != None:
                    queue.append(temp.right)
                    
        return depth