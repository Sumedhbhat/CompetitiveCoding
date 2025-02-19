#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	void dfs(int &n, int &currentN, int &k, int &currentK, string &res) {
		if (currentN == n) { currentK++; }
		if (currentK == k || currentN == n) return;
		for (char i = 'a'; i <= 'c'; i++) {
			if (!res.empty() && res.back() == i) continue;
			int newN = currentN + 1;
			res.push_back(i);
			dfs(n, newN, k, currentK, res);
			if (currentK == k) { return; }
			res.pop_back();
		}
	}

	string getHappyString(int n, int k) {
		string res = "";
		int currentK = 0, currentN = 0;
		dfs(n, currentN, k, currentK, res);
		return res;
	}
};
// @leet end
