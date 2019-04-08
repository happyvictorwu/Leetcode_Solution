#
# @lc app=leetcode id=283 lang=python3
#
# [283] Move Zeroes
#
# https://leetcode.com/problems/move-zeroes/description/
#
# algorithms
# Easy (53.63%)
# Total Accepted:    424.4K
# Total Submissions: 791.2K
# Testcase Example:  '[0,1,0,3,12]'
#
# Given an array nums, write a function to move all 0's to the end of it while
# maintaining the relative order of the non-zero elements.
# 
# Example:
# 
# 
# Input: [0,1,0,3,12]
# Output: [1,3,12,0,0]
# 
# Note:
# 
# 
# You must do this in-place without making a copy of the array.
# Minimize the total number of operations.
# 
#
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        left = 0 # [ left, len(nums) ) left 非0元素的最后一个位置+1，即0的起点
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[left] = nums[i]
                left += 1
                
        while left < len(nums):
            nums[left] = 0
            left += 1
