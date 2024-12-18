#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	string repeatLimitedString(string s, int repeatLimit) {
		map<char, int> freq;
		priority_queue<char> heap;
		char lastChar = ' ';
		string res = "";

		for (auto x : s) { freq[x]++; }
		for (auto [c, _] : freq) heap.push(c);
		for (auto [c, i] : freq) cout << c << " " << i << endl;

		auto addChars = [&](int count, char cur) {};

		while (!heap.empty()) {
			auto cur = heap.top();
			heap.pop();
			if (cur == lastChar) {
				if (heap.empty()) return res;
				auto secondCur = heap.top();
				heap.pop();
				lastChar = secondCur;
				res += secondCur;
				freq[secondCur]--;
				if (freq[secondCur] != 0) heap.push(secondCur);
				heap.push(cur);
				continue;
			}
			lastChar = cur;
			for (int i = 0; i < min(repeatLimit, freq[cur]); i++) res += cur;
			freq[cur] = max(0, freq[cur] - repeatLimit);
			if (freq[cur] != 0) heap.push(cur);
		}
		return res;
	}
};
// @leet end

int main() {}
