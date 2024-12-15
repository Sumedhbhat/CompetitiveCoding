#include <__std_clang_module>
#include <queue>
using namespace std;

// @leet start
class Solution {
  public:
	double maxAverageRatio(vector<vector<int>> &classes, int extraStudents) {
		const int n = classes.size();
		double average = 0;
		priority_queue<pair<double, int>> heap;
		for (int i = 0; i < n; i++) {
			auto pass = classes[i][0], total = classes[i][1];
			heap.push(
			    {((double)(total - pass) / (1ll * (total + 1) * total)), i});
		}
		for (int i = 0; i < extraStudents; i++) {
			auto [_, index] = heap.top();
			heap.pop();
			classes[index][0]++;
			classes[index][1]++;
			heap.push({((double)(classes[index][1] - classes[index][0]) /
			            (1ll * (classes[index][1] + 1) * classes[index][1])),
			           index});
		}
		for (auto x : classes) average += ((double)x[0] / x[1]);
		return average / n;
	}
};
// @leet end

int main() {}
