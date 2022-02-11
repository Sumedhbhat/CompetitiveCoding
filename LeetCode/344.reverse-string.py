#
# @lc app=leetcode id=344 lang=python3
#
# [344] Reverse String
#

# @lc code=start
class Solution:
    def reverseString(self, s: List[str]) -> None:
        l=len(s)
        for i in range(int(l/2)):
            temp=s[i]
            s[i]=s[l-i-1]
            s[l-i-1]=temp
# @lc code=end

