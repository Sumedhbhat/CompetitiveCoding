#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, k;
		cin >> n >> k;
		vector<bool> visited(n, false);
		vector<int> values(n, -1);
		int current = 1;
		for (int i = k - 1; i < n; i += k) {
			values[i] = current;
			current++;
		}
		for (int i = 0; i < n; i++) {
			if (values[i] == -1) {
				values[i] = current;
				current++;
			}
		}
		for (auto x : values) cout << x << " ";
		cout << endl;
	}
	return 0;
}
