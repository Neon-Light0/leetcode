# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        
        tortoise = head
        hare = head
        
        while(tortoise != None and hare != None):
            tortoise = tortoise.next
            hare = hare.next
            
            if hare != None:
                hare = hare.next
            else:
                break
            
            if hare == tortoise:
                return True
        
        return False