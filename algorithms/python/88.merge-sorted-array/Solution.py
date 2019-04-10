#
# @lc app=leetcode id=88 lang=python3
#
# [88] Merge Sorted Array
#
# https://leetcode.com/problems/merge-sorted-array/description/
#
# algorithms
# Easy (34.86%)
# Total Accepted:    332K
# Total Submissions: 951.3K
# Testcase Example:  '[1,2,3,0,0,0]\n3\n[2,5,6]\n3'
#
# Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as
# one sorted array.
# 
# Note:
# 
# 
# The number of elements initialized in nums1 and nums2 are m and n
# respectively.
# You may assume that nums1 has enough space (size that is greater or equal to
# m + n) to hold additional elements from nums2.
# 
# 
# Example:
# 
# 
# Input:
# nums1 = [1,2,3,0,0,0], m = 3
# nums2 = [2,5,6],       n = 3
# 
# Output: [1,2,2,3,5,6]
# 
# 
#
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        lenOfFinal = m+n
        r1, r2, end = m-1, n-1, lenOfFinal-1
        while r1 >=0 and r2 >=0:
            if nums1[r1] > nums2[r2]:
                nums1[end] = nums1[r1]
                r1 -= 1
            else:
                nums1[end] = nums2[r2]
                r2 -= 1
            end -= 1
        # when r1 < 0, elements of nums2 are not finish
        if r1 < 0:
            nums1[:r2+1] = nums2[:r2+1] # [0, r2+1)
        # when r2 < 0, nums1 are sorted, we have nothing to do
