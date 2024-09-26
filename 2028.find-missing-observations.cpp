/*
 * @lc app=leetcode id=2028 lang=cpp
 *
 * [2028] Find Missing Observations
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0;
        for(int i=0;i<rolls.size();i++){
            sum+=rolls[i];
        }
        int rem=mean*(rolls.size()+n)-sum;
        if(rem<n || rem>6*n){
            return {};
        }
        vector<int> ans(n,rem/n);
        rem=rem%n;
        for(int i=0;i<rem;i++){
            ans[i]++;
        }
        return ans;
    }
};
// @lc code=end

