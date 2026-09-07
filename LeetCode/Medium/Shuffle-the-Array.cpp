/*
 * Problem: Shuffle the Array
 * LeetCode: https://leetcode.com/problems/shuffle-the-array/
 * Difficulty: Medium
 * Language: C++
 */

1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> a(nums.begin()+n, nums.end());
5        vector<int> b;
6        for(int i=0;i<n;i++){
7            b.push_back(nums[i]);
8            b.push_back(a[i]);
9        }
10            
11        return b;
12    }
13};
