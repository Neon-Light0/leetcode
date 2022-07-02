# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        
        cur = head
        prev = None
        answer = None
        
        while cur != None:
            if cur.val == val:
                if prev != None:
                    cur = cur.next
                    prev.next = cur
                else:
                    cur = cur.next
                    answer = cur
            else:
                if prev == None:
                    answer = cur
                    
                prev = cur
                cur = cur.next
                
        
        return answer
                