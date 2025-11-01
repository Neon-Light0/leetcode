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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        std::unordered_set<int> set;

        for (auto& num : nums){
            set.insert(num);
        }

        ListNode* tempNode = new ListNode();
        tempNode->next = head;
        ListNode* curNode = head;
        ListNode* prevNode = tempNode;

        while (curNode) {
            if (set.contains(curNode->val)){
                prevNode->next = curNode->next;
                curNode = prevNode->next;
            } else {
                prevNode = curNode;
                curNode = curNode->next;
            }
        }

        return tempNode->next;
    }
};