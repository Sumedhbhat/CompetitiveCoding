/*
 * @lc app=leetcode id=788 lang=cpp
 *
 * [788] Rotated Digits
 */

// @lc code=start
class Solution
{
public:
    bool check(int n)
    {
        bool check = false;
        while (n)
        {
            int num = n % 10;
            if (num == 2 || num == 5 || num == 6 || num == 9)
                check = true;
            else if (num == 1 || num == 0 || num == 8)
            {
            }
            else
                return false;
            n /= 10;
        }
        return check;
    }
    int rotatedDigits(int n)
    {
        int count = 0;
        for (int i = 2; i <= n; i++)
        {
            if (check(i))
                count++;
        }
        return count;
    }
};
// @lc code=end
