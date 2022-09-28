#
# @lc app=leetcode id=242 lang=python3
#
# [242] Valid Anagram
#

# @lc code=start

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        validity = {}
        for i in s:
            if i in validity:
                validity[i] += 1
            else:
                validity[i] = 1
        for i in t:
            if i in validity and validity[i] != 0:
                validity[i] -= 1
            else:
                return False

            if validity[i] == 0:
                del validity[i]

        if len(validity) == 0:
            return True
        else:
            return False
# @lc code=end
