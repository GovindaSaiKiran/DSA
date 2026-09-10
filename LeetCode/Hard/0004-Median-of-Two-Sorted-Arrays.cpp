/*
 * Problem: Median of Two Sorted Arrays
 * LeetCode: https://leetcode.com/problems/median-of-two-sorted-arrays/
 * Difficulty: Hard
 * Language: C++
 */

1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        int a = nums2.size();
5        for(int i =0;i<a;i++){
6            nums1.push_back(nums2[i]);
7        }
8        sort(nums1.begin(), nums1.end());
9        int b = nums1.size();
10        if(b%2 == 0){
11            int c = b/2;
12            double d = (nums1[c-1]+nums1[c])/2.0;
13            return d;
14        }else{
15            int e = (b)/2;
16            return nums1[e];
17        }
18    }
19};
