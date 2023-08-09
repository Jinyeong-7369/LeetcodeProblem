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
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        ListNode* tmp = head;
        int checkTwice = 0;
        int count = 0;
        while (tmp != NULL)
        {
            count++;
            nums.push_back(tmp->val);
            tmp = tmp->next;

        }
        if (count < 2) return true;
        for (int i = 0; i < count / 2; i++)
        {
            if (nums[i] != nums[count - i - 1]) return false;
        }
        return true;
    }
};