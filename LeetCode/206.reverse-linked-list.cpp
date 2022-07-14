/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode *reverseList(ListNode *head)
    {
        vector<int> temp;
        while (head != nullptr)
        {
            temp.push_back(head->val);
            head = head->next;
        }
        if (temp.size() == 0)
            return head;
        ListNode *final = new ListNode(*temp.rbegin());
        ListNode *ans = final;
        for (auto i = temp.rbegin() + 1; i != temp.rend(); i++)
        {
            final->next = new ListNode(*i);
            final = final->next;
        }
        return ans;
    }
};
// @lc code=end
