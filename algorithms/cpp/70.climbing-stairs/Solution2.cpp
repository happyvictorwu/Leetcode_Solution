/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */
class Solution {

public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        vector<int> memo = vector<int>(n+1, -1);
        // memo[0] = 1;
        memo[1] = 1;
        memo[2] = 2;
        for (int i = 3; i <= n; i++) {
            memo[i] = memo[i-1] + memo[i-2];
        }

        return memo[n];
    }
};

