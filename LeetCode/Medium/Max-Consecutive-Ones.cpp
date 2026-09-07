/*
 * Problem: Max Consecutive Ones
 * LeetCode: https://leetcode.com/problems/max-consecutive-ones/
 * Difficulty: Medium
 * Language: C++
 */

1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int a = 0;
5        int max = 0;
6        int zeroes = 0;
7        int b = nums.size();
8        for (int i = 0;i<b; i++){
9            if(nums[i]==1){
10                a++;
11                if(a>max){
12                    max = a;
13                }
14            }else{
15                a = zeroes;
16            }
17        }return max;
18    }
19};
