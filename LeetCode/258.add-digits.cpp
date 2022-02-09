/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int sum=0;
            while(num!=0){
                sum+=num%10;
                num=num/10;
            }
            num=sum;
        }
        return num;
    }
};
// @lc code=end

