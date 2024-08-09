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
    void reorderList(ListNode* head) {
        std::vector<ListNode*> nodeList;
        ListNode* curNode = head;
        
        while (curNode){
            nodeList.push_back(curNode);
            curNode = curNode->next;
        }

        for (int i = 0; i < nodeList.size() / 2; i++){
            ListNode* nextNode = nodeList[i]->next;
            nodeList[i]->next = nodeList[nodeList.size() - 1 - i];
            nodeList[i]->next->next = nextNode;
        }

        nodeList[std::ceil((nodeList.size() - 1)/2.0)]->next = nullptr; 
    }
};