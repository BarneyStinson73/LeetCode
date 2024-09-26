/*
 * @lc app=leetcode id=2751 lang=cpp
 *
 * [2751] Robot Collisions
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int test=0;
        char temp=directions[0];
        for(int i=0;i<directions.size();i++){
            if(temp!=directions[i]){
                test=1;
                break;
            }
        }
        if(test==0){
            return healths;
        }
        
    }
};
// @lc code=end

