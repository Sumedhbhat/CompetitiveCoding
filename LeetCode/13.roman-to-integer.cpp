/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        //char *str=&s;
       // int len=length(s);
        int sum=0,len=s.length();
        int i=0;
        while(i<len){
            if(s[i]=='I' && s[i+1]=='V'){
                sum+=4;
                i++;
            }
            else if(s[i]=='I' && s[i+1]=='X'){
                sum+=9;
                i++;
            }
            else if(s[i]=='X' && s[i+1]=='L'){
                sum+=40;
                i++;
            }
            else if(s[i]=='X' && s[i+1]=='C'){
                sum+=90;
                i++;
            }
            else if(s[i]=='C' && s[i+1]=='D'){
                sum+=400;
                i++;
            }
            else if(s[i]=='C' && s[i+1]=='M'){
                sum+=900;
                i++;
            }
            else if(s[i]=='I')
            sum=sum+1;
            else if(s[i]=='V')
            sum=sum+5;
            else if(s[i]=='X')
            sum=sum+10;
            else if(s[i]=='L')
            sum=sum+50;
            else if(s[i]=='C')
            sum=sum+100;
            else if(s[i]=='D')
            sum=sum+500;
            else if(s[i]=='M')
            sum=sum+1000;
           i++;
        }
        
     return sum;
    }
};
// @lc code=end

