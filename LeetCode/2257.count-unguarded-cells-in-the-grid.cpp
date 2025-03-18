#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int countUnguarded(int m, int n, vector<vector<int>> &guards,
	                   vector<vector<int>> &walls) {
		vector visited(m, vector<int>(n, 0));
		int count = 0;

		for (auto x : guards) visited[x[0]][x[1]] = 4;
		for (auto x : walls) visited[x[0]][x[1]] = 5;

		auto setVisited = [&](int row, int col) {
			if (visited[row][col] != 4) return;
			int right = col + 1, left = col - 1, top = row - 1,
			    bottom = row + 1;
			while (right < n && visited[row][right] != 1 &&
			       visited[row][right] < 4) {
				if (visited[row][right] == 2) visited[row][right] = 3;
				else visited[row][right] = 1;
				right++;
			}

			while (left >= 0 && visited[row][left] != 1 &&
			       visited[row][left] < 4) {
				if (visited[row][left] == 2) visited[row][left] = 3;
				else visited[row][left] = 1;
				left--;
			}

			while (top >= 0 && visited[top][col] != 2 &&
			       visited[top][col] < 4) {
				if (visited[top][col] == 1) visited[top][col] = 3;
				else visited[top][col] = 2;
				top--;
			}

			while (bottom < m && visited[bottom][col] != 2 &&
			       visited[bottom][col] < 4) {
				if (visited[bottom][col] == 1) visited[bottom][col] = 3;
				else visited[bottom][col] = 2;
				bottom++;
			}
		};

		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++) setVisited(i, j);

		for (auto x : visited)
			for (auto y : x)
				if (y == 0) count++;
		return count;
	}
};
// @leet end

int main() {}
