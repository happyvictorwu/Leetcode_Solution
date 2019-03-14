/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 *
 * https://leetcode.com/problems/reverse-vowels-of-a-string/description/
 *
 * algorithms
 * Easy (40.86%)
 * Total Accepted:    144.9K
 * Total Submissions: 353.9K
 * Testcase Example:  '"hello"'
 *
 * Write a function that takes a string as input and reverse only the vowels of
 * a string.
 * 
 * Example 1:
 * 
 * 
 * Input: "hello"
 * Output: "holle"
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "leetcode"
 * Output: "leotcede"
 * 
 * 
 * Note:
 * The vowels does not include the letter "y".
 * 
 * 
 * 
 */
class Solution {
public:
    // 对撞指针
    // Time Complexity: O(n)
    // Space Complexity: (1)
    string reverseVowels(string s) {
        int l = 0, r = s.length() - 1;  // [l, r]

        while (l < r) {
            if ( !isVowel(s[l]) ) {
                ++l;
            } else if ( !isVowel(s[r]) ) {
                --r;
            } else {
                swap(s[l++], s[r--]);
            }
        }
        return s;

    }

private:
    bool isVowel(char c) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            return true;
        }
        return false;
    }
};

