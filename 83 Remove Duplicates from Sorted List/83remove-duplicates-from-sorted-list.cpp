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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* previous = nullptr;
        ListNode* current = head;

        while (current) {
            if (previous && previous->val == current->val) {
                ListNode* next = current->next;
                previous->next = next;
                delete current;
                current = next;
            } else {
                previous = current;
                current = current->next;
            }
        }

        return head;
    }
};