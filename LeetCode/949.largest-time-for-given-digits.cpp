/*
 * @lc app=leetcode id=949 lang=cpp
 *
 * [949] Largest Time for Given Digits
 */

// @lc code=start
class Solution
{
public:
    string make_time(int i, int j, int k, int l)
    {
        string time = "";
        string hours = to_string(i) + to_string(j);
        string minutes = to_string(k) + to_string(l);
        if (stoi(hours) > 23 || stoi(minutes) >= 60)
            return "-1";
        return hours + minutes;
    }
    string largestTimeFromDigits(vector<int> &arr)
    {
        int length = arr.size();
        int max_time = -1;
        string max = "";
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                for (int k = 0; k < 4; k++)
                {
                    int l = 6 - i - j - k;
                    if (i == j || j == k || k == i)
                        continue;
                    string time = make_time(arr[i], arr[j], arr[k], arr[l]);
                    if (stoi(time) > max_time)
                    {
                        max = time;
                        max_time = stoi(time);
                    }
                }
        if (max_time == -1)
            return "";
        else
        {
            max.insert(2, ":");
            return max;
        }
    }
};
// @lc code=end
