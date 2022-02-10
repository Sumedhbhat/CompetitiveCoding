/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
string longestPalindrome(string s) {
        int sz = s.size();
        string ret("");
        if(sz == 1) return s;
        if(sz == 2 && s[0] == s[1]) return s;
        if(sz == 2 && s[0] != s[1])
        {
            ret = s[0];
            return ret;
        }
        int longest = 0;
        bool dp[1000][1000] = {0,};  
        int p = 0,q = 0;
        for(int i = 0;i<sz;++i){
            dp[i][i] = 1;
            if(i>=1){
                if(s[i-1] == s[i]){
                    dp[i-1][i] = 1;
                    p = i-1;
                    q = i;
                }
            }
        }
        for(int i = 2;i<sz;++i){
            for(int j = 0;j<sz-i;++j){        
                if(s[j] == s[i+j] && dp[j+1][j+i-1] == 1){
                    dp[j][i+j] = 1;
                    if(i > longest){
                        longest = i;
                        q = i+j;
                        p = j;
                    }
                }
            }
        }
        ret.assign(s,p,q-p+1);
        return ret;    
    }
};
// @lc code=end

