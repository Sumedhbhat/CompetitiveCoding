/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1, min = nums[0];
        while (left <= right)
        {
            if (nums[left] < nums[right])
                min = nums[left] < min ? nums[left] : min;
            int mid = (left + right) / 2;
            if (nums[mid] < min)
                min = nums[mid];
            if (nums[left] <= nums[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return min;
    }
};
// @lc code=end
