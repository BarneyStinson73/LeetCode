/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int t=nums.size(),strt=0,end=0;
        vector<int> output;
        // sort(nums.begin(),nums.end());
        for(int i=0;i<t;i++){
            if(nums[i]==val){

            }
            else{
                output.push_back(nums[i]);
            }
        }
        nums=output;
        return nums.size();
    }
};
// @lc code=end

