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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        std::vector<int> answer = {-1, -1};
        
        ListNode* curNode = head->next;
        
        if (!curNode) return answer;
        
        curNode = curNode->next;
        
        int index = 1;
        int front = head->val, mid = head->next->val, back;
        std::vector<int> criticalPoints;
        
        while (curNode){
            back = curNode->val;
            
            if (mid > front && mid > back){
                criticalPoints.push_back(index);
            } else if ( mid < front && mid < back){
                criticalPoints.push_back(index);
            }
            
            front = mid;
            mid = back;
            curNode = curNode->next;
            index++;
        }
        
        if (criticalPoints.size() < 2) return answer;
        
        int curMin = INT_MAX;
        
        for (int i = 1; i < criticalPoints.size(); i++){
            curMin = std::min(curMin, criticalPoints[i] - criticalPoints[i - 1]);
        }
        
        answer[0] = curMin;
        answer[1] = criticalPoints[criticalPoints.size() - 1] - criticalPoints[0];
        return answer;
    }
};