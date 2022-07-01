# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        
        sum = 0
        multiplier = 1
        ptr1 = l1
        ptr2 = l2
        
        
        while (ptr1 != None and ptr2 != None):
            n1 = 0
            n2 = 0
            
            if ptr1 != None:
                n1 = ptr1.val
            if ptr2 != None:
                n2 = ptr2.val
            
            sum += (n1 + n2) * multiplier
            
            multiplier *= 10
            
            if ptr1 != None:
                ptr1 = ptr1.next
            if ptr2 != None:
                ptr2 = ptr2.next
            
            print(sum)
            
        return sum
        
        