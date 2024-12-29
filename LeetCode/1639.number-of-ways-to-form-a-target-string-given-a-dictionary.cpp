#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int numWays(vector<string> &words, string target) {
		const int n = words.size();
		const int targetSize = target.size();
		const int sizeOfWord = words[0].size();
		const int MOD = 1e9 + 7;
		vector<map<char, int>> cnt(words[0].size());
		for (int i = 0; i < n; i++)
			for (int j = 0; j < sizeOfWord; j++) cnt[j][words[i][j]]++;
		vector dp(sizeOfWord + 1, vector<int>(targetSize + 1));

		for (int i = 0; i <= sizeOfWord; i++) dp[i][0] = 1;

		for (int i = 1; i <= sizeOfWord; i++) {
			for (int j = 1; j <= targetSize; j++) {
				dp[i][j] = dp[i - 1][j];
				if (cnt[i - 1].find(target[j - 1]) != cnt[i - 1].end()) {
					dp[i][j] +=
					    (1ll * dp[i - 1][j - 1] * cnt[i - 1][target[j - 1]]) %
					    MOD;
					dp[i][j] %= MOD;
				}
			}
		}
		return dp[sizeOfWord][targetSize];
	}
};
// @leet end

int main() {}
