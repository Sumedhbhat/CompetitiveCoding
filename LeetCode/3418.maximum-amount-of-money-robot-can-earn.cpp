#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int maximumAmount(vector<vector<int>> &coins) {
		const int m = coins.size(), n = coins[0].size();
		vector dp(coins.size() + 1,
		          vector(coins[0].size() + 1, vector<int>(3, INT_MIN)));
		dp[0][0][2] = coins[0][0];
		dp[0][0][1] = dp[0][0][0] = coins[0][0] < 0 ? 0 : coins[0][0];
		for (int i = 1; i < m; i++) {
			for (int k = 0; k < 3; k++) {
				dp[i][0][k] = max(dp[i - 1][0][k] + coins[i][0], dp[i][0][k]);
				if (coins[i][0] < 0 and k != 0)
					dp[i][0][k - 1] = max(dp[i - 1][0][k], dp[i][0][k - 1]);
			}
		}

		for (int i = 1; i < n; i++) {
			for (int k = 0; k < 3; k++) {
				dp[0][i][k] = max(dp[0][i - 1][k] + coins[0][i], dp[0][i][k]);
				if (coins[0][i] < 0 and k != 0)
					dp[0][i][k - 1] = max(dp[0][i - 1][k], dp[0][i][k - 1]);
			}
		}
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				for (int k = 0; k < 3; k++) {
					dp[i][j][k] =
					    max({dp[i - 1][j][k] + coins[i][j], dp[i][j][k],
					         dp[i][j - 1][k] + coins[i][j]});
					if (coins[i][j] < 0 and k != 0)
						dp[i][j][k - 1] = max({dp[i - 1][j][k], dp[i][j - 1][k],
						                       dp[i][j][k - 1]});
				}
			}
		}
		return max(
		    {dp[m - 1][n - 1][2], dp[m - 1][n - 1][1], dp[m - 1][n - 1][0]});
	}
};
// @leet end

int main() {}
