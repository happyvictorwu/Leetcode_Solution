/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (53.63%)
 * Total Accepted:    424.4K
 * Total Submissions: 791.2K
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 * 
 * Example:
 * 
 * 
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * 
 * Note:
 * 
 * 
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 * 
 */
class Solution {
public:
    // Time Complexity: O(n)
    // Space Comlexity: O(1)
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;   // i代表非0元素的最后位置+1， j是遍历指针。 最后[i, j)的元素都为0
        for (; j < nums.size(); ++j) {
            if (nums[j] != 0) {
                nums[i++] = nums[j];
            }
        }

        // 这个是有i指向的元素是所有非零元素的后一个，所以把[i, j)设置为0
        for (; i < j; ++i) {
            nums[i] = 0;
        }
    }
};

