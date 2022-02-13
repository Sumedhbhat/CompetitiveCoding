#
# @lc app=leetcode id=567 lang=python3
#
# [567] Permutation in String
#

# @lc code=start
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        m,n=len(s2),len(s1)
        v=["0"]*m;
        for i in s1:
            for j in range(m):
                if s2[j]==i:
                    v[j]="1"
        v="".join(v)
        print(v)
        print(v[3:3+n]==1*n)
        print(s1," ",s2)
        for i in range(m-n):
            if v[i:i+n]=='1'*n:
                return True
            print(v[i:i+n])


# @lc code=end

