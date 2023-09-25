#
# @lc app=leetcode id=1016 lang=python3
#
# [1016] Binary String With Substrings Representing 1 To N
#

# @lc code=start
class Solution:
    def queryString(self, s: str, n: int) -> bool:
        test=True
        for i in range(1,n+1):
            if s.find(format(i,"b"))==-1:
                test=False
                break
        return test
# @lc code=end

