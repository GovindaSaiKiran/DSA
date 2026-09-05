/*
 * Problem: Smallest Stable Index II
 * LeetCode: https://leetcode.com/problems/smallest-stable-index-ii/
 * Difficulty: Hard
 * Language: C++
 */

1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5        vector<int> leftMax(n);
6        vector<int> rightMin(n);
7        leftMax[0] = nums[0];
8        for(int i = 1; i < n; i++) {
9            leftMax[i] = max(leftMax[i - 1], nums[i]);
10        }
11        rightMin[n - 1] = nums[n - 1];
12        for(int i = n - 2; i >= 0; i--) {
13            rightMin[i] = min(rightMin[i + 1], nums[i]);
14        }
15        for(int i = 0; i < n; i++) {
16
17            int result = leftMax[i] - rightMin[i];
18
19            if(result <= k) {
20                return i;
21            }
22        }
23        return -1;
24    }
25};
