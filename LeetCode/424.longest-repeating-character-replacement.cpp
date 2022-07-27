/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */
using namespace std;
#include <bits/stdc++.h>
// @lc code=start
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int max = 0, left = 0, highFreq = 0;
        map<char, int> freq;
        for (int right = 0; right < s.length(); right++)
        {
            if (freq.find(s[right]) != freq.end())
                freq[s[right]] += 1;
            else
                freq[s[right]] = 1;
            // cout << "Frequency" << freq[s[right]] << s[right] << endl;
            highFreq = highFreq > freq[s[right]] ? highFreq : freq[s[right]];
            // cout << left << " " << right << " " << highFreq << " " << right - left + 1 - highFreq << endl;
            if ((right - left + 1 - highFreq) > k)
            {
                // cout << "here" << endl;
                freq[s[left]]--;
                left++;
            }
            max = max > (right - left + 1) ? max : (right - left + 1);
            // cout << highFreq << " " << max << endl;
        }
        return max;
    }
};
// @lc code=end
