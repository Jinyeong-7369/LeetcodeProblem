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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merge;
        if(list1 == NULL && list2 ==NULL) return merge;
        else merge = new ListNode;
        ListNode* tmp = merge;
        ListNode* tmp1 = list1;
        ListNode* tmp2 = list2;
        while(tmp1 != NULL || tmp2 != NULL)
        {
            if(tmp1 == NULL)
            {
                tmp->val = tmp2->val;
                tmp2 = tmp2->next;
            }
            else if(tmp2 == NULL)
            {
                tmp->val = tmp1->val;
                tmp1 = tmp1->next;
            }
            else
            {
                if(tmp1->val < tmp2->val)
                {
                    tmp->val = tmp1->val;
                    tmp1 = tmp1->next;
                }
                else
                {
                    tmp->val = tmp2->val;
                    tmp2 = tmp2->next;
                }
            }
            if(tmp1 != NULL || tmp2 != NULL)
            {
                tmp->next = new ListNode;
                tmp = tmp->next;
            }
        }
        return merge;
    }
};