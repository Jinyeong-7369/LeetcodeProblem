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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans;
        if (l1 == NULL || l2 == NULL)
        {
            ans = (l1 == NULL) ? l2 : l1;
            return ans;
        }
        ans = l1;
        ListNode* tmpL1 = l1;
        ListNode* tmpL2 = l2;
        int carry = 0;
        ListNode* before;
        while (tmpL1 != NULL || tmpL2 != NULL || carry)
        {
            if (tmpL1 == NULL)
            {
                tmpL1 = new ListNode(0);
                before->next = tmpL1;
            }
            tmpL1->val = tmpL1->val + getValue(tmpL2) + carry;
            carry = tmpL1->val > 9 ? 1 : 0;
            tmpL1->val = (carry == 1) ? (tmpL1->val - 10) : (tmpL1->val);
            before = tmpL1;
            goNext(tmpL1);
            goNext(tmpL2);
        }
        return ans;

    }
    int getValue(ListNode* l1)
    {
        if (l1 == NULL) return 0;
        else return l1->val;
    }
    void goNext(ListNode*& l1)
    {
        if (l1 == NULL) return;
        else l1 = l1->next;
    }
};