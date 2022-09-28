/*
 * @lc app=leetcode id=849 lang=cpp
 *
 * [849] Maximize Distance to Closest Person
 */

// @lc code=start
class Solution
{
public:
    int maxDistToClosest(vector<int> &seats)
    {
        int max = 0, ans = 0;
        for (auto i = seats.begin(); i != seats.end(); i++)
        {
            if (*i == 1)
            {
                if (((max + 1) / 2) > ans)
                    ans = (max + 1) / 2;
                max = 0;
            }
            else
                max++;
        }
        for (int i = 0; i < seats.size(); i++)
        {
            if (seats[i] == 1)
            {
                if (i > ans)
                    ans = i;
                break;
            }
        }
        for (int i = seats.size() - 1; i >= 0; i--)
        {
            if (seats[i] == 1)
            {
                int m = seats.size() - 1 - i;
                if (m > ans)
                    ans = m;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end
