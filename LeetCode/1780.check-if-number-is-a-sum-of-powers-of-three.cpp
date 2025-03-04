#include <__std_clang_module>
using namespace std;

/*
 * @lc app=leetcode id=1780 lang=cpp
 *
 * [1780] Check if Number is a Sum of Powers of Three
 */

// @lc code=start
class Solution {
  public:
	bool checkPowersOfThree(int n) {
		while (n > 1) {
			if (n % 3 == 2) { return false; }
			if (n % 3 == 1) { n--; }
			n /= 3;
		}
		return true;
	}
};
// @lc code=end
