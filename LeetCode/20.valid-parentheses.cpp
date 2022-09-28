/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> stack;
        bool check = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stack.push_back(s[i]);
            }
            else
            {
                if (stack.size() == 0)
                    return false;
                switch (s[i])
                {
                case '}':
                    if (stack.back() != '{')
                    {
                        check = false;
                    }
                    stack.pop_back();
                    break;
                case ']':
                    if (stack.back() != '[')
                    {
                        check = false;
                    }
                    stack.pop_back();
                    break;
                case ')':
                    if (stack.back() != '(')
                    {
                        check = false;
                    }
                    stack.pop_back();
                    break;
                default:
                    check = false;
                }
                if (check == false)
                    return false;
            }
        }
        if (stack.size() == 0)
            return true;
        else
            return false;
    }
};
// @lc code=end
