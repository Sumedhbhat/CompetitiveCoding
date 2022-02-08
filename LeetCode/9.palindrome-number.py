#
# @lc app=leetcode id=9 lang=python3
#
# [9] Palindrome Number
#

# @lc code=start
import math
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x <0:
            return False
        if x==0:
            return True
        y=math.floor(math.log(x,10))+1
        def pali(z,len):
            if len==1 or len==0:
                return True
            else:        
                a=math.floor(z/(10**(len-1)))              
                b=z%10
                if a==b:
                    z=math.floor((z-(a*(10**(len-1))))/10)
                    return pali(z,len-2)
                else:
                    return False
        return pali(x,y)


# @lc code=end

