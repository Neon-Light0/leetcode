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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        std::vector<ListNode*> parts(k, nullptr);

        ListNode* curNode = head;
        int count = 0;

        while (curNode){
            count++;
            curNode = curNode->next;
        }

        curNode = head;

        for (int i = 0; i < k && curNode; i++){
            int partSize = count / k;
            partSize = i < count % k ? partSize + 1 : partSize;
            parts[i] = curNode;

            for (int j = 1; j < partSize; j++){
                curNode = curNode->next;
            }

            ListNode* temp = curNode->next;
            curNode->next = nullptr;
            curNode = temp;
        }

        return parts;
    }
};