/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *prev, *nNode, *temp;
        temp = head;
        nNode = head;
        prev = head;
        for (int i = 0; i < n; i++)
            temp = temp->next;
        while (temp != nullptr)
        {
            prev = nNode;
            temp = temp->next;
            nNode = nNode->next;
        }
        if (prev->next == nullptr)
            return nullptr;
        else if (prev == nNode)
            head = head->next;
        else
            prev->next = nNode->next;
        return head;
    }
};
// @lc code=end
