#include <__std_clang_module>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		if (n % 33 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
