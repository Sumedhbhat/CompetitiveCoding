#include <__std_clang_module>

using namespace std;
/*
 * @lc app=leetcode id=1358 lang=cpp
 *
 * [1358] Number of Substrings Containing All Three Characters
 */

// @lc code=start
class Solution {
  public:
	int numberOfSubstrings(string s) {
		int n = s.size();
		vector<int> count(3, 0);
		int totalSubstrings = 0;
		int start = 0, end = 0;
		while (end < n) {
			count[s[end] - 'a']++;
			while (count[0] && count[1] && count[2]) {
				totalSubstrings += n - end;
				count[s[start++] - 'a']--;
			}
			end++;
		}
		return totalSubstrings;
	}
};
// @lc code=end
