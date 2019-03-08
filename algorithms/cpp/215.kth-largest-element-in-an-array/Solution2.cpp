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
    int findKthLargest(vector<int>& nums, int k) {

        srand(time(NULL));
        return findKthLargest(nums, 0, nums.size()-1 , k - 1 );
    }

private:
    int findKthLargest(vector<int>& nums, int l, int r, int k){

        if( l == r )
            return nums[l];

        int p = partition(nums, l, r);

        if( p == k )
            return nums[p];
        else if( k < p )
            return findKthLargest(nums, l, p-1, k);
        else // k > p
            return findKthLargest(nums, p+1 , r, k);
    }

    int partition( vector<int>& nums, int l, int r ){

        int p = rand()%(r-l+1) + l;
        swap( nums[l] , nums[p] );

        int lt = l + 1; //[l+1...lt) > p ; [lt..i) < p
        for( int i = l + 1 ; i <= r ; i ++ )
            if( nums[i] > nums[l] )
                swap(nums[i], nums[lt++]);

        swap(nums[l], nums[lt-1]);

        return lt-1;
    }
};

