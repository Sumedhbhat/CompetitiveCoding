/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size(),count=0,i=0,len1;
        len1=len;
        while(i<(len)){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                len--;
            }else{
                i++;
            }
        }
        len1-=len;
        while((len1)!=0){
            nums.push_back(0);
            len1--;
        }
    }
};
// @lc code=end

