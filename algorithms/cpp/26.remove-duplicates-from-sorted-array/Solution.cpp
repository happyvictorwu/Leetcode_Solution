/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int ans = 1;

        for (int i = 1; i < n; i++)
            if (nums[i] != nums[ans-1])
                nums[ans++] = nums[i];
            
        return ans;
    }
};