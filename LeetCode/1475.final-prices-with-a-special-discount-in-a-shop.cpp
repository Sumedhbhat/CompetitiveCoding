#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	vector<int> finalPrices(vector<int> &prices) {
		const int n = prices.size();
		vector<int> res(n, 0);
		res[n - 1] = prices[n - 1];
		if (n == 1) return prices;
		for (int i = n - 2; i >= 0; i--) {
			res[i] = prices[i];
			for (int j = i + 1; j < n; j++) {
				if (prices[j] <= prices[i]) {
					res[i] = prices[i] - prices[j];
					break;
				}
			}
		}
		return res;
	}
};
// @leet end

int main() {}
