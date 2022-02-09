#
# @lc app=leetcode id=5 lang=python3
#
# [5] Longest Palindromic Substring
#

# @lc code=start
class Solution:
    def longestPalindrome(self, s: str) -> str:
        if len(s)==1:
            return s
        bestlen=0
        beststr=""
        for i in range(0,len(s)):
            k=i
            curlen=0
            for j in range(len(s)-1,i-1,-1):
                if s[k]==s[j]:
                    if curlen < (j-i+1):
                        curlen=j-i+1
                    if k==j or k+1==j:
                        if curlen>bestlen:
                            bestlen=curlen
                            beststr=s[i:i+curlen]
                    k=k+1
                else:
                    continue
        return beststr
# @lc code=end

