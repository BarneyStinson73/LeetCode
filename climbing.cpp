#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int ways=1;
        while(n>1){
            n=n-2;
            ways+=2;
        }
        return ways;
    }
};