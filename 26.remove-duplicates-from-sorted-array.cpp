/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=nums[0],count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==temp){
                nums[i]=1000;
                count++;
            }
            else{
                temp=nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-count;
    }
};
// @lc code=end

