/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution
{
public:
    void swap(int *a, int *b)
    {
        int *temp = a;
        a = b;
        b = temp;
    }
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0, j = 0;
        vector<int> temp;
        while (i != m || j != n)
        {
            if (i == m)
            {
                temp.push_back(nums2[j]);
                j++;
            }
            else if (j == n)
            {
                temp.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i] > nums2[j])
            {
                temp.push_back(nums2[j]);
                j++;
            }
            else
            {
                temp.push_back(nums1[i]);
                i++;
            }
        }
        nums1 = temp;
    }
};
// @lc code=end
