/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int left=1,right=n,mid=1;
        while(left<=right){
            mid=(left+right)/2;
            if (isBadVersion(mid)){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return right+1;
    }
};
// @lc code=end

