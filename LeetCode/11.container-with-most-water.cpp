/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max = 0, first = 0, second = height.size() - 1;
        while (first < second)
        {
            int area = ((height[first] > height[second] ? height[second] : height[first]) * (second - first));
            // cout << area << " " << first << second << endl;
            if (area > max)
            {
                max = area;
                (height[first] > height[second]) ? second-- : first++;
            }
            else
            {
                (height[first] > height[second]) ? second-- : first++;
                // cout << "Inside else" << first << second << endl;
            }
        }
        return max;
    }
};
// @lc code=end
