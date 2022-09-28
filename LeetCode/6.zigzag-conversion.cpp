/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        vector<string> temp(numRows, "");
        int flag = 0, curRow = 0;
        for (int i = 0; i < s.length(); i++)
        {
            temp[flag] += s[i];
            if (curRow == numRows)
            {
                flag = 0;
            }
            else if (curRow == 0)
            {
                flag = 1;
            }
            if (flag == 1)
            {
                curRow++;
            }
            else
            {
                curRow--;
            }
        }
        string final = "";
        for (int i = 0; i < numRows; i++)
        {
            final += temp[i];
        }
        return final;
    }
};
// @lc code=end
