/*
 * Problem: Move Zeroes
 * LeetCode: https://leetcode.com/problems/move-zeroes/
 * Difficulty: Easy
 * Language: C++
 */

1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int insertPos = 0;
5        for (int i = 0; i < nums.size(); i++) {
6            if (nums[i] != 0) {
7                nums[insertPos] = nums[i];
8                insertPos++;
9            }
10        }
11        while (insertPos < nums.size()) {
12            nums[insertPos] = 0;
13            insertPos++;
14        }
15        return;
16    }
17};
