/*
 * Problem: Largest Number At Least Twice of Others
 * LeetCode: https://leetcode.com/problems/largest-number-at-least-twice-of-others/
 * Difficulty: Easy
 * Language: C++
 */

1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4        int n = nums.size();
5        int a = 0;
6        for(int i=0;i<n;i++){
7            if(nums[i]>nums[a]){
8                a=i;
9            }
10        }
11        for(int i=0;i<n;i++){
12            if(i!=a&&nums[a]<nums[i]*2){
13                return -1;
14            }
15        }
16        return a;
17    }
18};
