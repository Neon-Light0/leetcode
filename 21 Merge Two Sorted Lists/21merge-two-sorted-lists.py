# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        
        newNode = ListNode(-101, list2)
        ptr1 = list1
        ptr2 = newNode
        
        while ptr1 != None and ptr2 != None:
            if ptr2.next == None:
                ptr2.next = ptr1
                break
            else:
                if ptr2.next.val >= ptr1.val:
                    tempt = ptr1.next
                    ptr1.next = ptr2.next
                    ptr2.next = ptr1
                    ptr1 = tempt
                
                ptr2 = ptr2.next
        
        return newNode.next
        
        
        
        
        

        
        
            
            
        
                