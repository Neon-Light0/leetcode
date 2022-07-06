# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def recursive(self, lst, node):
        if node == None:
            return
        
        self.recursive(lst, node.left)
        self.recursive(lst, node.right)
        lst.append(node.val)
        
    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        lst = []
        self.recursive(lst, root)

        return lst