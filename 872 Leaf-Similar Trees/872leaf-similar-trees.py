# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        def isLeaf(node):
            if node.left == None and node.right == None:
                return True
            else:
                return False
        
        def getSequence(arr, node):
            if node == None:
                return
            
            getSequence(arr, node.left)

            if isLeaf(node):
                arr.append(node.val)
                return

            getSequence(arr, node.right)

        sequence1 = []
        sequence2 = []

        getSequence(sequence1, root1)
        getSequence(sequence2, root2)

        return sequence1 == sequence2
            

