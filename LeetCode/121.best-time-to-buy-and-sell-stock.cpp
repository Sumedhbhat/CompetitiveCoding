/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min = prices[0], mp = 0;
        for (auto i = prices.begin(); i != prices.end(); i++)
        {
            if (min > *i)
                min = *i;
            if (mp < *i - min)
                mp = *i - min;
        }
        return mp;
    }
};
// @lc code=end
