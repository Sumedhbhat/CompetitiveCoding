/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while(n>0){
            if(n%2==1)
                count++;
            n /= 2;
        }
        return count;
    }
};
// @lc code=end
