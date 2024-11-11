#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode id=2601 lang=cpp
 *
 * [2601] Prime Subtraction Operation
 */

// @lc code=start
class Solution {
public:
    inline bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        if (n == 2 || n == 3) {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0) {
            return false;
        }
        for (int i = 5; i <= sqrt(n); i = i + 6)
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        return true;
    }
    inline int findLargestPrimeNumber(int n, int start) {
        if (start < 0)
            return -1;
        for (int i = start; i < n; i++) {
            if (isPrime(i))
                return i;
        }
        return -1;
    }
    bool primeSubOperation(vector<int>& nums) {
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1])
                continue;
            int smallestItem =
                findLargestPrimeNumber(nums[i], nums[i] - nums[i + 1] + 1);
            if (smallestItem == -1)
                return false;
            nums[i] = nums[i] - smallestItem;
        }
        return true;
    }
};
// @lc code=end

