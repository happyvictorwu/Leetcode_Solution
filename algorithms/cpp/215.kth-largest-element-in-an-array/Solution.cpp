/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 *
 * https://leetcode.com/problems/kth-largest-element-in-an-array/description/
 *
 * algorithms
 * Medium (46.00%)
 * Total Accepted:    328.5K
 * Total Submissions: 712.6K
 * Testcase Example:  '[3,2,1,5,6,4]\n2'
 *
 * Find the kth largest element in an unsorted array. Note that it is the kth
 * largest element in the sorted order, not the kth distinct element.
 * 
 * Example 1:
 * 
 * 
 * Input: [3,2,1,5,6,4] and k = 2
 * Output: 5
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [3,2,3,1,2,4,5,5,6] and k = 4
 * Output: 4
 * 
 * Note: 
 * You may assume k is always valid, 1 ≤ k ≤ array's length.
 * 
 */
class Solution {
public:
    // Time Complexity: O(nlogk), O(n)
    // Space Complexity: O(k),O(1)
    int findKthLargest(vector<int>& nums, int k) {
        // assert(0 < k && k <= nums.size());
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int e: nums) {
            if (pq.size() < k) {
                pq.push(e);
            } else if (e > pq.top()) {
                pq.pop();
                pq.push(e);
            }
        }

        return pq.top();
    }
};

