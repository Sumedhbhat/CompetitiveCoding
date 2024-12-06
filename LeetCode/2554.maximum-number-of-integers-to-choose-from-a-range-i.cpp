#include <__std_clang_module>
#include <functional>
#include <queue>
using namespace std;

// @leet start
class Solution {
  public:
	int maxCount(vector<int> &banned, int n, int maxSum) {
		priority_queue<int, vector<int>, greater<int>> heap;
		int currentSum = 0, maxNumbers = 0;
		for (auto x : banned) heap.push(x);
		for (int i = 0; i <= n; i++) {
			bool visited = false;
			while (!heap.empty() and heap.top() == i) {
				heap.pop();
				visited = true;
			}
			if (visited) continue;
			if (currentSum + i > maxSum) break;
			currentSum += i;
			maxNumbers++;
		}
		return maxNumbers;
	}
};
// @leet end

int main() {}
