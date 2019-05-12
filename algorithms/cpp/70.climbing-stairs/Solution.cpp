/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */
class Solution {

private:
    vector<int> memo;
    int calsWays(int n) {
        if (n == 1 || n == 2) {
            return n;
        }

        if (memo[n] == -1) {
            memo[n] = calsWays(n-1) + calsWays(n-2);
        }

        return memo[n];
    }
public:
    int climbStairs(int n) {
        memo = vector<int>(n+1, -1);
        return calsWays(n);
    }
};

