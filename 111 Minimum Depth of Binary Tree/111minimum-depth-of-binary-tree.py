# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        
        if root == None:
            return 0
        
        depth = 0
        
        queue = [root]
        
        while len(queue) > 0:
            arr = []
            depth += 1
            
            for node in queue:
                cur_node = node
                
                if cur_node.left == None and cur_node.right == None:
                    return depth
                
                if cur_node.left != None:
                    arr.append(cur_node.left)
                    
                if cur_node.right != None:
                    arr.append(cur_node.right)
            
            queue = arr
            
                

        