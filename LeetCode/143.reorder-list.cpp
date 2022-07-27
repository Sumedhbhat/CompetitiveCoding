/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
 */
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
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
    void reorderList(ListNode *head)
    {
        ListNode *fast = head->next, *slow = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *traverse = slow->next;
        slow->next = nullptr;
        ListNode *prev = nullptr;
        while (traverse != nullptr)
        {
            ListNode *temp = traverse->next;
            traverse->next = prev;
            prev = traverse;
            traverse = temp;
        }
        ListNode *first = head, *second = prev;
        while(first!=nullptr && second!=nullptr)
        {
            ListNode* temp=first->next,*temp2=second->next;
            first->next = second;
            second->next = temp;
            second = temp2;
            first = temp;
        }
    }
};
// @lc code=end
