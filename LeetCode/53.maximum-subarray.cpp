/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best=INT_MIN;
        int cur=0;
        for (auto x:nums){
            cur=cur+x;
            if(best<cur)
                best=cur;
            if(cur<0){
                cur=0;
            }
            
        }
        return best;
    }
};
// @lc code=end

