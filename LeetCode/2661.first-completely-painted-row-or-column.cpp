#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat) {
		const int n = mat.size(), m = mat[0].size();
		map<int, pair<int, int>> mp;
		vector<int> visRow(n, 0), visCol(m, 0);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) mp[arr[mat[i][j]]] = {i, j};
		}
		int res = 0;
		for (auto x : arr) {
			res++;
			auto [r, c] = mp[x];
			visRow[r]++;
			visCol[c]++;
			if (visRow[r] == m or visCol[c] == n) return res - 1;
		}
		return res - 1;
	}
};
// @leet end

int main() {}
