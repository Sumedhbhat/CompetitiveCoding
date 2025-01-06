#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	vector<int> minOperations(string boxes) {
		const int n = boxes.size();
		vector<int> costLeft(boxes.size(), 0), costRight(boxes.size(), 0);

		int prev = 0;
		for (int i = 0; i < n; i++) {
			costLeft[i] = i == 0 ? 0 : costLeft[i - 1] + prev;
			if (boxes[i] == '1') prev++;
		}

		prev = 0;
		for (int i = n - 1; i >= 0; i--) {
			costRight[i] = i == n - 1 ? 0 : costRight[i + 1] + prev;
			if (boxes[i] == '1') prev++;
		}

		vector<int> res(n, 0);
		for (int i = 0; i < n; i++) { res[i] = costLeft[i] + costRight[i]; }
		return res;
	};
};
// @leet end

int main() {}
