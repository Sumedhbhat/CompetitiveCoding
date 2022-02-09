#
# @lc app=leetcode id=278 lang=python3
#
# [278] First Bad Version
#

# @lc code=start
# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        left,right=0,n
        value=[-1] * n
        while left<=right:
            mid=int((left+right)/2)
            if isBadVersion(mid):
                value[mid]=0
                right=mid-1
            else:
                value[mid]=1
                left=mid+1
        for i in range(n-1):
            if value[i]==1 and value[i+1]==0:
                return i+1
# @lc code=end
