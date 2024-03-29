/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr)
            return l2;
        if (l2 == nullptr)
            return l1;
        auto head = new ListNode();
        int carry = 0, cur;
        auto temp = head;
        while ((l1 || l2) || (carry != 0))
        {
            cur = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0));
            temp->next = new ListNode((carry + cur) % 10);
            carry = (carry + cur) / 10;
            temp = temp->next;
            if (l1)
            {
                l1 = l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }
        }
        return head->next;
    }
};
// @lc code=end
