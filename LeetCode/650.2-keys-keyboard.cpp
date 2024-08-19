#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=650 lang=cpp
 *
 * [650] 2 Keys Keyboard
 */
// @lc code=start
class Solution {
	vector<int> prime_numbers{2, 3, 5, 7, 11};

  public:
	int minSteps(int n) {
		if (n == 1 or n == 0) return 0;
		int primePos = 0;
		int currentPrime = 2;
		while ((currentPrime = findNextPrime(primePos++)) <= n)
			if (n % currentPrime == 0)
				return minSteps(n / currentPrime) + currentPrime;

		return 0;
	}

	int findNextPrime(int primePos) {
		if (prime_numbers.size() > primePos) return prime_numbers[primePos];
		int checkFrom = prime_numbers.back();
		while (!isPrime(++checkFrom, prime_numbers[primePos - 1])) {};
		prime_numbers.push_back(checkFrom);
		return checkFrom;
	}

	bool isPrime(int n, int lastKnownPrime) {
		for (auto x : prime_numbers) {
			if (n % x == 0) return false;
		}
		for (int i = lastKnownPrime; i < n; i++) {
			if (n % i == 0) return false;
		}
		return true;
	}
};
// @lc code=end
