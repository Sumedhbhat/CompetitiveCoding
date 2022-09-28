/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string temp;
        int m = word1.size(), n = word2.size();
        int i = 0, size = (m > n) ? n : m;
        while (i != size)
        {
            temp += (word1[i]);
            temp += (word2[i]);
            i++;
        }
        while (i < m)
        {
            temp += (word1[i]);
            i++;
        }
        while (i < n)
        {

            temp += (word2[i]);
            i++;
        }
        return temp;
    }
};
// @lc code=end
