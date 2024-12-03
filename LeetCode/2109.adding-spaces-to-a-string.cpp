#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	string addSpaces(string s, vector<int> &spaces) {
		const int n = spaces.size();
		const int sn = s.size();
		string news = "";
		int current = 0;
		for (int i = 0; i < sn; i++) {
			if (current < n and spaces[current] == i) {
				news += ' ';
				current++;
			}
			news += s[i];
		}
		return news;
	}
};
// @leet end

int main() {}
