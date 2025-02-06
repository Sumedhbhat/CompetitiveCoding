#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int tupleSameProduct(vector<int> &nums) {
		unordered_map<int, int> m;
		int n = nums.size();
		int res = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int prod = nums[i] * nums[j];
				m[prod]++;
			}
		}
		for (auto [k, v] : m) {
			if (v > 1) res += 4 * v * (v - 1);
		}
		return res;
	}
};
// @leet end
