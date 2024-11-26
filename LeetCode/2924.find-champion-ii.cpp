#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int findChampion(int n, vector<vector<int>> &edges) {
		const int m = edges.size();
		vector<bool> visited(n, false);
		int foundAnswer = -1;
		for (auto x : edges) {
			int lower = x[0];
			int higher = x[1];

			visited[higher] = true;
		}

		for (int i = 0; i < visited.size(); i++) {
			if (!visited[i]) {
				if (foundAnswer != -1) return -1;
				foundAnswer = i;
			}
		}
		return foundAnswer;
	}
};
// @leet end

int main() {}
