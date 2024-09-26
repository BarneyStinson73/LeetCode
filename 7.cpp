#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if(x==0 )return 0;
        vector<int> nums;
        int temp=abs(x);
        
        while(x!=0){
            nums.push_back(x%10);
            x/=10;
        }
        int checker=INT_MAX,checkk=INT_MIN;
        int res=0,multiplier=0;
        for(int i=nums.size()-1;i>=0;i--){
            // res+=nums[i]*multiplier;
            // multiplier*=10;
            // if(multiplier==10) return 0;
            if(res+nums[i]*pow(10,multiplier)> checker) return 0;
            res+=nums[i]*pow(10,multiplier);
            multiplier++;
        }
        if(x<0) {
            if(res*(-1)< checkk) return 0;
            return res*(-1);
        }
        return res;
    }
};