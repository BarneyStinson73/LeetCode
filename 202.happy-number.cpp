/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(true){
            int sum = 0;
            while(n != 0){
                int rem = n % 10;
                sum += rem * rem;
                n = n / 10;
            }
            if(sum == 1)
                return true;
            if(seen.find(sum) != seen.end())  // if the sum is already in the set
                return false;
            seen.insert(sum);  // add the sum to the set
            n = sum;
        }
    }
};

// @lc code=end

