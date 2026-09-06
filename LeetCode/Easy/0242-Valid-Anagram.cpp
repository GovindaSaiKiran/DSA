/*
 * Problem: Valid Anagram
 * LeetCode: https://leetcode.com/problems/valid-anagram/
 * Difficulty: Easy
 * Language: C++
 */

1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        int l = s.length();
5        int m = t.length();
6        if(l==m){
7            sort(s.begin(), s.end());
8            sort(t.begin(), t.end());
9            return s==t;
10        }else{
11            return false;
12        }
13    }
14};
