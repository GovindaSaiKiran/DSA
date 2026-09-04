/*
 * Problem: Smallest Stable Index I
 * LeetCode: https://leetcode.com/problems/smallest-stable-index-i/
 * Difficulty: Hard
 * Language: C++
 */

1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        for(int i=0;i<nums.size();i++){
5            vector<int> first(nums.begin(), nums.begin()+i+1);
6            vector<int> second(nums.begin()+i, nums.end());
7            int max = first[0];
8            for(int i=0;i<first.size();i++){
9                if(first[i]>max){
10                    max = first[i];
11                }
12            }
13            int min = second[0];
14            for(int i=0;i<second.size();i++){
15                if(second[i]<min){
16                    min = second[i];
17                }
18            }
19            int result = max - min;
20            if(result <=k){
21                return i;
22            }
23        }
24        return -1;
25    }
26};
