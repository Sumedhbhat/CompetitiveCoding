#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int mincostTickets(vector<int> &days, vector<int> &costs) {
		const int DAYS = 365;
		vector<int> dp(DAYS + 1, 0);
		unordered_map<int, bool> travel;
		int maxTravel = 0;
		for (auto x : days) {
			maxTravel = x;
			travel[x] = true;
		}
		for (int i = 1; i <= DAYS; i++) {
			if (travel[i]) {
				dp[i] = min({dp[i - 1] + costs[0], dp[max(0, i - 7)] + costs[1],
				             dp[max(0, i - 30)] + costs[2]});
			} else {
				dp[i] = dp[i - 1];
			}
			if (i == maxTravel) return dp[maxTravel];
		}
		return dp[DAYS];
	}
};
// @leet end

int main() {}
