/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    void swap(int *x, int *y)
    {
        cout << *x << *y;
        int temp = *x;
        *x = *y;
        *y = temp;
        cout << *x << *y;
    }
    int reverse(int x)
    {
        vector<int> n;
        int y = 0;
        if (x < 0)
        {
            y = 1;
            x = x * -1;
        }
        while (x > 0)
        {
            n.push_back(x % 10);
            x = x / 10;
        }
        // for (int i = 0; i < n.size() / 2; i++)
        // {
        //     cout << endl
        //          << i << n.size() - 1 - i << endl
        //          << n[i] << endl;
        //     swap(&n[i], &n[n.size() - 1 - i]);
        //     // cout << n[i] << n[n.size() - 1 - i];
        // }
        x = 0;
        for (auto i = n.begin(); i != n.end(); i++)
            x = (x * 10) + *i;
        if (y == 1)
            x = x * -1;
        return x;
    }
};
// @lc code=end
