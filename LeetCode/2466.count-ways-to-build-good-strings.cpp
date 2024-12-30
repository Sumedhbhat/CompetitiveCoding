#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int countGoodStrings(int low, int high, int zero, int one) {
		const int MOD = 1e9 + 7;
		vector<int> dp(high + 1, 0);
		int res = 0;
		dp[0] = 1;
		for (int i = 1; i <= high; i++) {
			if (i - zero >= 0) dp[i] = (1ll * (dp[i] + dp[i - zero])) % MOD;
			if (i - one >= 0) dp[i] = (1ll * (dp[i] + dp[i - one])) % MOD;
			if (i >= low) res = (1ll * (res + dp[i])) % MOD;
		}

		return res;
	}
};
// @leet end

int main() {}
