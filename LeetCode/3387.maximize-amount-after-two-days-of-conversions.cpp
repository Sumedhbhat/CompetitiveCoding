#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	double maxAmount(string initialCurrency, vector<vector<string>> &pairs1,
	                 vector<double> &rates1, vector<vector<string>> &pairs2,
	                 vector<double> &rates2) {
		const int m = pairs1.size(), n = pairs2.size();
		map<string, vector<pair<string, double>>> conversions1, conversions2;
		for (int i = 0; i < m; i++) {
			auto startCurrency = pairs1[i][0], targetCurrency = pairs1[i][1];
			auto rate = rates1[i];
			conversions1[startCurrency].push_back({targetCurrency, rate});
			conversions1[targetCurrency].push_back({startCurrency, 1 / rate});
		}

		for (int i = 0; i < n; i++) {
			auto startCurrency = pairs2[i][0], targetCurrency = pairs2[i][1];
			auto rate = rates2[i];
			conversions2[targetCurrency].push_back({startCurrency, rate});
			conversions2[startCurrency].push_back({targetCurrency, 1 / rate});
		}

		map<string, double> prices1, prices2;
		prices1[initialCurrency] = 1.0;
		queue<string> processor;
		processor.push(initialCurrency);
		while (!processor.empty()) {
			auto currentCurrency = processor.front();
			processor.pop();
			for (auto [nextCurrency, rate] : conversions1[currentCurrency]) {
				if (prices1[nextCurrency] < prices1[currentCurrency] * rate) {
					prices1[nextCurrency] = prices1[currentCurrency] * rate;
					processor.push(nextCurrency);
				}
			}
		}

		double res = 1.0;
		prices2[initialCurrency] = 1.0;
		processor.push(initialCurrency);
		while (!processor.empty()) {
			auto currentCurrency = processor.front();
			processor.pop();
			res = max(res, prices1[currentCurrency] * prices2[currentCurrency]);
			for (auto [nextCurrency, rate] : conversions2[currentCurrency]) {
				if (prices2[nextCurrency] < prices2[currentCurrency] * rate) {
					prices2[nextCurrency] = prices2[currentCurrency] * rate;
					processor.push(nextCurrency);
				}
			}
		}
		return res;
	}
};
// @leet end

int main() {}
