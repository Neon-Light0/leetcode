# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        
        dist = 0
        node = ListNode(-1, head)
        p1 = node
        p2 = node
        
        while p1:
            p1 = p1.next
            dist += 1
        
            if dist > n + 1:
                p2 = p2.next
                dist -= 1
        
        if p2.next == None:
            p2.next = None
        else:
            p2.next = p2.next.next
        
        return node.next
        