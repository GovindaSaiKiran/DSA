/*
 * Problem: Rotate Array
 * LeetCode: https://leetcode.com/problems/rotate-array/
 * Difficulty: Medium
 * Language: C++
 */

1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int a = nums.size();
5        k = k%a;
6        reverse(nums.begin(), nums.end());
7        reverse(nums.begin(), nums.begin()+k);
8        reverse(nums.begin()+k, nums.end());
9    }
10};
