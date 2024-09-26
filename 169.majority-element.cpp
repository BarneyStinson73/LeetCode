/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int position=nums.size()/2;
        sort(nums.begin(),nums.end());
        return nums[position];
    }
};
// @lc code=end

