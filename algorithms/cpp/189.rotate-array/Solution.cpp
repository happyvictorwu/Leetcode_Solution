/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0 || k <= 0) return;
        int rk = k % n;

        reverse(begin(nums), end(nums));
        reverse(begin(nums), begin(nums)+rk);
        reverse(begin(nums)+rk, end(nums));
    }
};

