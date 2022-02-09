/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include <string>
class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.length(),count=0;
        for(int i=0;i<len;i++){
            if (isalnum(s[i]))
                s[i-count]=tolower(s[i]);
            else
                count++;
        }
        len-=count;
        for (int i=0;i<len/2;i++){
            if (s[i]!=s[len-i-1])
                return false;
        }
        return true;
    }
};
// @lc code=end

