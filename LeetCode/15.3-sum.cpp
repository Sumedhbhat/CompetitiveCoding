/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int first = 0, second, third;
        // for (auto i = nums.begin(); i != nums.end(); i++)
        //     cout << *i;
        // cout << endl;
        for (int first = 0; first < nums.size() - 2; first++)
        {
            second = first + 1;
            third = nums.size() - 1;
            // cout << "forLoop" << endl;
            if (first > 0 && nums[first] == nums[first - 1])
                continue;
            while (second < third)
            {
                // cout << nums[first] << nums[second] << nums[third] << endl;
                // while (nums[second] == nums[first])
                //     second++;
                // if (nums[second] == nums[second + 1])
                //     second++;
                // if (nums[second] == nums[third])
                //     break;
                if (second > first + 1 && nums[second] == nums[second - 1])
                {
                    second++;
                    continue;
                }
                if (third < nums.size() - 1 && nums[third] == nums[third + 1])
                {
                    third--;
                    continue;
                }
                if (nums[first] + nums[second] + nums[third] == 0)
                {
                    // cout << "here" << endl;
                    ans.push_back({nums[first], nums[second], nums[third]});
                    second += 1;
                }
                else if (nums[first] + nums[second] + nums[third] > 0)
                {
                    third -= 1;
                }
                else
                {
                    second += 1;
                }
            }
        }
        return ans;
    }
};
// @lc code=end
