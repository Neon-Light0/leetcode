# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def maxProduct(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def getSum(node):
            if node == None:
                return 0
            
            return node.val + getSum(node.left) + getSum(node.right)
        
        tree_sum = getSum(root)
        cur_max = [0]

        def recursive(cur_max, node):
            if node == None:
                return 0

            sub_tree_sum = recursive(cur_max, node.left) + recursive(cur_max, node.right) + node.val

            product = sub_tree_sum * (tree_sum - sub_tree_sum)

            if product > cur_max[0]:
                cur_max[0] = product

            return sub_tree_sum

        recursive(cur_max, root)

        return cur_max[0] % (10**9 + 7)

        
