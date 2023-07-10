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
        ListNode* start = head;
        ListNode* t;
        while(start != NULL)
        {
            t =  start->next;
            while(t != NULL)
            {
                if(t->val != start->val) break;
                t = t->next;
            }
            start->next = t;
            start = t;
        }
        return head;
    }
};
