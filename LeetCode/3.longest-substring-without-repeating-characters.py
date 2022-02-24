#
# @lc app=leetcode id=3 lang=python3
#
# [3] Longest Substring Without Repeating Characters
#

# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        best=0
        present=""
        for i in range(len(s)):
            if s[i] in present:
                index=present.index(s[i])
                present=present[index+1:]+s[i]
            else:
                present+=s[i]
            if best<len(present):
                best=len(present)
        return best
# @lc code=end