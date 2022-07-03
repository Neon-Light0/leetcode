# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        
        s = set()
        
        cur = head
        
        while cur:
            if cur in s:
                return cur
            else:
                s.add(cur)
                cur = cur.next
        
        return None
        
            
        
        
        