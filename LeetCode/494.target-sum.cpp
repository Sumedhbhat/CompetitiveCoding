#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int findTargetSumWays(vector<int> &nums, int target) {
		int sum = 0;
		for (auto x : nums) sum += x;
		vector<int> dp(2 * sum + 1, 0);
		dp[sum] = 1;
		for (int i = 0; i < nums.size(); i++) {
			vector<int> next(2 * sum + 1, 0);
			for (int j = 0; j < 2 * sum + 1; j++) {
				if (dp[j] > 0) {
					next[j + nums[i]] += dp[j];
					next[j - nums[i]] += dp[j];
				}
			}
			dp = next;
		}
		if (sum + target >= dp.size()) return 0;
		return dp[sum + target];
	}
};
// @leet end

int main() {}
