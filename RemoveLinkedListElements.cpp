
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* tmp = head;
        head = new ListNode;
        head->val = 0;
        head->next = tmp;
        for(ListNode* p = head; p != NULL; p = p->next)
        {
            if(p->next == NULL)
            {
                break;
            }
            else if(p->next->val == val)
            {
                p->next = p->next->next;
                p = head;
            }
        }
        if(head->next != NULL)
        {
            if(head->next->val == val)
            {
                return head->next->next;
            }
        }
        return head->next;
    }
};
