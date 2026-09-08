/*
 * Problem: Count Commas in Range
 * LeetCode: https://leetcode.com/problems/count-commas-in-range/
 * Difficulty: Easy
 * Language: C++
 */

1class Solution {
2public:
3    int countCommas(int n) {
4        int a = to_string(n).length();
5        if(a<=3){
6            return 0;
7        }else{
8            return n-999;
9        }
10    }
11};
