#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int minimumLength(string s) {
		vector<int> m(26, 0);
		int total = 0;
		for (auto c : s) m[c - 'a']++;
		for (int i = 0; i < 26; i++) {
			if (m[i] == 0) continue;
			if (m[i] % 2 == 0) total += 2;
			else if (m[i] % 2 == 1) total++;
		}
		return total;
	}
};
// @leet end

int main() {}
