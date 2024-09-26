/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp,size=nums.size();
        

        // for(int i=1;i<=k;i++){
        //     temp=nums[size-1];
        //     nums.erase(nums.begin() + size-1);
        //     nums.insert(nums.begin(), temp);
        // }

        vector<int> tt;
        for(int i=k+1;i<size;i++){
            tt.push_back(nums[i]);
        }
        for(int i=0;i<=k;i++){
            tt.push_back(nums[i]);
        }
        nums=tt;
    }
};
// @lc code=end

