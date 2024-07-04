/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* targetNode = head;
        ListNode * prevTargetNode = nullptr;
        ListNode* curNode = head->next;
        int sum = 0;
        
        while (curNode){
            if (curNode->val == 0){
                targetNode->val = sum;
                prevTargetNode = targetNode;
                targetNode = targetNode->next;
                sum = 0;
            } else {
                sum += curNode->val;
            }
            
            curNode = curNode->next;
        }
        
        prevTargetNode->next = nullptr;
        
        return head;
    }
};