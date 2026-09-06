/*
 * Problem: Palindrome Number
 * LeetCode: https://leetcode.com/problems/palindrome-number/
 * Difficulty: Easy
 * Language: C++
 */

1class Solution {
2public:
3    bool isPalindrome(int x) {
4        string d = to_string(x);
5        string r = d;
6        reverse(r.begin(), r.end());
7        return d==r;
8    }
9};
