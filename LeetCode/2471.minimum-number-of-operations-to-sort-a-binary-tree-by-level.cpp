#include <__std_clang_module>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right)
	    : val(x), left(left), right(right) {}
};
// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
  public:
	int minimumOperations(TreeNode *root) {
		queue<TreeNode *> q;
		const int SHIFT = 20;
		const int MASK = 0xFFFFF;
		int swapped = 0;
		q.push(root);
		while (!q.empty()) {
			int levelSize = q.size();
			vector<long long> current(levelSize);

			for (int i = 0; i < levelSize; i++) {
				current[i] =
				    (static_cast<long long>(q.front()->val) << SHIFT) + i;
				if (q.front()->left != nullptr) q.push(q.front()->left);
				if (q.front()->right != nullptr) q.push(q.front()->right);
				q.pop();
			}
			sort(current.begin(), current.end());
			for (int i = 0; i < levelSize; i++) {
				int currentPosition = current[i] & MASK;
				if (currentPosition != i) {
					swap(current[currentPosition], current[i]);
					swapped++;
					i--;
				}
			}
		}
		return swapped;
	}
};
// @leet end

int main() {}
