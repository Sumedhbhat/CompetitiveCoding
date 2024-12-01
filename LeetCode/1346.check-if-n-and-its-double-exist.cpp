#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	bool checkIfExist(vector<int> &arr) {
		unordered_map<int, bool> exists;
		for (auto x : arr) {
			if (exists[x / 2] or exists[x * 2]) return true;
			exists[x] = true;
		}
		return false;
	}
};
// @leet end

int main() {}
