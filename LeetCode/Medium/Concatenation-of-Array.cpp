/*
 * Problem: Concatenation of Array
 * LeetCode: https://leetcode.com/problems/concatenation-of-array/
 * Difficulty: Medium
 * Language: C++
 */

1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int a = nums.size();
5        for(int i=0;i<a;i++){
6            nums.push_back(nums[i]);
7        }
8        return nums;
9    }
10};
