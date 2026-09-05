/*
 * Problem: Two Sum
 * LeetCode: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 * Language: C++
 */

1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n = nums.size();
5        vector<int> r;
6        for(int i= 0; i<n;i++)
7        {
8            int m = nums[i];
9
10            for(int j=(i+1);j<n;j++){
11                if((m+nums[j])==target){
12                    r.push_back(i);
13                    r.push_back(j);
14                    return r;
15                }
16            }
17        }return {};
18    }
19};
