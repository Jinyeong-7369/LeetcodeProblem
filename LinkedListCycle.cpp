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
    bool hasCycle(ListNode* head) {
        ListNode* tmp = head;
        while (1)
        {
            if (tmp == NULL) return false;
            else if (tmp->val == INT_MAX) return true;
            tmp->val = INT_MAX;
            tmp = tmp->next;
        }
        return false;
    }
};