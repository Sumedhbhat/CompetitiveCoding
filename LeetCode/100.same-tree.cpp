/*
 * @lc app=leetcode id=100 lang=cpp
 *
 * [100] Same Tree
 */
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if ((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr))
            return false;
        else if (p->val != q->val)
            return false;
        else
            return true;
        bool straight = (isSameTree(p->left, q->left) && (isSameTree(p->right, q->right)));
        if (straight)
            return true;
        else
            return false;
    }
};
// @lc code=end
