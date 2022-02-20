#
# @lc app=leetcode id=567 lang=python3
#
# [567] Permutation in String
#

# @lc code=start
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        sub,string=len(s1),len(s2)
        subans=dict.fromkeys(s1,0)
        for i in range(sub):
            subans[s1[i]]+=1
        for i in range(string-sub+1):
            ans=dict.fromkeys(s2[i:i+sub],0)
            for j in range(sub):
                ans[s2[i+j]]+=1
            if ans==subans:
                return True


# @lc code=end

