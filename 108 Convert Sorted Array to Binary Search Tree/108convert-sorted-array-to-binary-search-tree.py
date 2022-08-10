# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def sortedArrayToBSTRecur(self, l, r, nums):
        if l > r:
            return None
        
        mid = (l + r) // 2
        
        mid_node = TreeNode(nums[mid], self.sortedArrayToBSTRecur(l, mid-1, nums), self.sortedArrayToBSTRecur(mid+1, r, nums))
        
        return mid_node    
    
    def sortedArrayToBST(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        left = 0
        right = len(nums) - 1
        
        answer = self.sortedArrayToBSTRecur(left, right, nums)
        
        return answer;