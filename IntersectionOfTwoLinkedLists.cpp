/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        vector<ListNode*> nodeVec;
        ListNode* tmpA = headA;
        ListNode* tmpB = headB;
        while (tmpA != NULL)
        {
            nodeVec.push_back(tmpA);
            tmpA = tmpA->next;
        }
        while (tmpB != NULL)
        {
            nodeVec.push_back(tmpB);
            tmpB = tmpB->next;
        }
        sort(nodeVec.begin(), nodeVec.end());
        for (int i = 0; i < nodeVec.size() - 1; i++)
        {
            if (nodeVec[i] == nodeVec[i + 1]) return nodeVec[i];
        }
        return NULL;
    }
};