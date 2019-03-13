/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 *
 * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
 *
 * algorithms
 * Easy (49.33%)
 * Total Accepted:    217.4K
 * Total Submissions: 439.4K
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers that is already sorted in ascending order, find
 * two numbers such that they add up to a specific target number.
 * 
 * The function twoSum should return indices of the two numbers such that they
 * add up to the target, where index1 must be less than index2.
 * 
 * Note:
 * 
 * 
 * Your returned answers (both index1 and index2) are not zero-based.
 * You may assume that each input would have exactly one solution and you may
 * not use the same element twice.
 * 
 * 
 * Example:
 * 
 * 
 * Input: numbers = [2,7,11,15], target = 9
 * Output: [1,2]
 * Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
 * 
 */
class Solution {
public:
    // 二分法
    // Time Complexity: O(nlongn)
    // Space Complexity: O(1)
    vector<int> twoSum(vector<int>& numbers, int target) {
        // ...两个以下
        if ( numbers.size() < 2 )   // 这个if可以不需要
            throw invalid_argument("数组元素个数少于两个，不存在问题的解");

        // 两个元素以上的情况
        for (int i = 0; i < numbers.size(); ++i) {
            // [ i+1, numbers.size() ) 进行二分查找
            int l = i+1, r = numbers.size();
            while ( l < r ) {
                int mid = (l + r) / 2;
                if (numbers[mid] == target - numbers[i]) {
                    int res[] = {i+1, mid+1};
                    return vector<int>(res, res + 2);
                } else if (numbers[mid] < target - numbers[i]) {
                    // 结果在mid的左边，要继续往右找
                    l = mid + 1;
                } else {    // numbers[mid] > target - numbers[i]
                    // 结果在mid的右边，要继续往左找
                    r = mid;
                }
            }
        }

        throw invalid_argument("数组中不存在问题的解");
    }
};

// int main() {

//     vector<int> nums = {2,7,11,15};

//     print_vec( Solution().twoSum(nums, 9) );



//     return 0;
// }
