/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

const int kk = 2;  // 要保留要重复几个

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int n = nums.size();
        int ans = 1;
        int rest = kk - 1;

        for (int i = 1; i < n; i++) {
            if (nums[ans-1] != nums[i]) {
                nums[ans++] = nums[i];
                rest = kk - 1;
            } else {    // nums[ans-1] == nums[i]
                if (rest > 0) {
                    nums[ans++] = nums[i];
                    --rest;
                }
            }
        }

        return ans;
    }
};

