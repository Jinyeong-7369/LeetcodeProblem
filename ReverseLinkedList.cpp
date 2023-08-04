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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return head;
        vector<ListNode*> nodeVec;
        ListNode* tmp = head;
        while (tmp != NULL)
        {
            nodeVec.push_back(tmp);
            tmp = tmp->next;
        }
        reverse(nodeVec.begin(), nodeVec.end());
        for (int i = 0; i < nodeVec.size(); i++)
        {
            if (i == nodeVec.size() - 1)
            {
                (nodeVec[i])->next = NULL;
                break;
            }
            (nodeVec[i])->next = (nodeVec[i + 1]);
        }
        return nodeVec[0];
    }
};