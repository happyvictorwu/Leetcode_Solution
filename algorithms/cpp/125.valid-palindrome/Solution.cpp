/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 *
 * https://leetcode.com/problems/valid-palindrome/description/
 *
 * algorithms
 * Easy (30.23%)
 * Total Accepted:    326.6K
 * Total Submissions: 1.1M
 * Testcase Example:  '"A man, a plan, a canal: Panama"'
 *
 * Given a string, determine if it is a palindrome, considering only
 * alphanumeric characters and ignoring cases.
 * 
 * Note: For the purpose of this problem, we define empty string as valid
 * palindrome.
 * 
 * Example 1:
 * 
 * 
 * Input: "A man, a plan, a canal: Panama"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "race a car"
 * Output: false
 * 
 * 
 */
class Solution {
public:
    // 碰撞指针
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;

        while (l < r) {
            if ( !isalnum(s[l]) ) {
                ++l;
            } else if ( !isalnum(s[r]) ) {
                --r;
            } else if (tolower(s[l++]) != tolower(s[r--])) {
                // s[l]和s[r]都是数字或字母且不相等的时候就不是回文，其余情况继续便利
                return false;
            }
        }
        return true;
    }
};

