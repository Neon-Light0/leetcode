# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        
        answer = []
        queue = []
        
        if root != None:
            queue.append(root)
        
        while queue:
            level = []
            
            ln = len(queue)
            
            for i in range(ln):
                level.append(queue[0].val)
                
                temp = queue[0]
                queue.pop(0)
                
                if temp.left != None:
                    queue.append(temp.left)
                
                if temp.right != None:
                    queue.append(temp.right)
                
            answer.append(level)
                
                
            
        
        return answer
            