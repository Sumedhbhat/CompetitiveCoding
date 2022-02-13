#
# @lc app=leetcode id=557 lang=python3
#
# [557] Reverse Words in a String III
#

# @lc code=start
class Solution:
    def reverseWords(self, s: str) -> str:
        s=s.split(' ')
        for i in range(len(s)):
            s[i]=s[i][::-1]
        return " ".join(s)
# @lc code=end

