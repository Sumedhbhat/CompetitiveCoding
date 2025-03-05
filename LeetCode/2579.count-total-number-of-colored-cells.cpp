#include <__std_clang_module>
using namespace std;

/*
 * @lc app=leetcode id=2579 lang=cpp
 *
 * [2579] Count Total Number of Colored Cells
 */

// @lc code=start
class Solution {
  public:
	typedef long long ll;
	ll coloredCells(int n) {
		ll res = 1;
		int add = 0;

		for (int i = 1; i <= n; i++) {
			res += add;
			add += 4;
		}
		return res;
	}
};
// @lc code=end
