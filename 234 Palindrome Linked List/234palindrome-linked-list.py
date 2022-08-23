# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        
        arr = []
        curNode = head
        
        while curNode:
            arr.append(curNode.val)
            curNode = curNode.next
        
        for i in range(len(arr)/2):
            j = len(arr) - 1 - i
            
            if arr[i] != arr[j]:
                return False
        
        return True