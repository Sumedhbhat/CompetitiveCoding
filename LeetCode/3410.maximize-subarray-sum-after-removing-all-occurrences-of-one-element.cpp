#include <__std_clang_module>
using namespace std;

// @leet start
using ll = long long;
class node {
  public:
	ll prefix, suffix, tot, maxi = LLONG_MIN;
	node() {}
	node(ll val) { prefix = suffix = tot = maxi = val; }
};

class SegmentTree {
	vector<node> tree;
	int n;

	node merge(const node &a, const node &b) {
		node res;
		res.tot = a.tot + b.tot;
		res.prefix = max(a.prefix, a.tot + b.prefix);
		res.suffix = max(b.suffix, b.tot + a.suffix);
		res.maxi = max({a.maxi, b.maxi, a.suffix + b.prefix});
		return res;
	}

  public:
	void build(vector<ll> &nums, int v, int tl, int tr) {
		if (tl == tr) {
			tree[v] = node(nums[tl]);
		} else {
			int tm = (tl + tr) / 2;
			build(nums, v * 2 + 1, tl, tm);
			build(nums, v * 2 + 2, tm + 1, tr);
			tree[v] = merge(tree[v * 2 + 1], tree[v * 2 + 2]);
		}
	}

	node query(int v, int tl, int tr, int l, int r) {
		if (l > r) { return node(); }
		if (l == tl && r == tr) { return tree[v]; }
		int tm = (tl + tr) / 2;
		return merge(query(v * 2 + 1, tl, tm, l, min(r, tm)),
		             query(v * 2 + 2, tm + 1, tr, max(l, tm + 1), r));
	}

	void update(int v, int tl, int tr, int pos, ll new_val) {
		if (tl == tr) {
			tree[v] = node(new_val);
		} else {
			int tm = (tl + tr) / 2;
			if (pos <= tm) {
				update(v * 2 + 1, tl, tm, pos, new_val);
			} else {
				update(v * 2 + 2, tm + 1, tr, pos, new_val);
			}
			tree[v] = merge(tree[v * 2 + 1], tree[v * 2 + 2]);
		}
	}

	SegmentTree(vector<ll> &nums) {
		n = nums.size();
		tree.resize(4 * n + 1);
		build(nums, 0, 0, n - 1);
	}

	SegmentTree(vector<int> &nums) {
		n = nums.size();
		tree.resize(4 * n + 1);
		vector<ll> temp;
		for (auto x : nums) { temp.push_back(x); }
		build(temp, 0, 0, n - 1);
	}

	ll query(int l, int r) { return query(0, 0, n - 1, l, r).maxi; }
};

class Solution {
  public:
	long long maxSubarraySum(vector<int> &nums) {
		map<int, vector<int>> mp;
		for (int i = 0; i < nums.size(); i++) { mp[nums[i]].push_back(i); }
		SegmentTree st(nums);
		ll maxi = st.query(0, nums.size() - 1);
		if (maxi < 0) return maxi;

		for (auto [value, positions] : mp) {
			if (value > 0) continue;
			for (auto x : positions) { st.update(0, 0, nums.size() - 1, x, 0); }
			maxi = max(maxi, st.query(0, nums.size() - 1));
			for (auto x : positions) {
				st.update(0, 0, nums.size() - 1, x, value);
			}
		}
		return maxi;
	}
};
// @leet end

int main() {}
