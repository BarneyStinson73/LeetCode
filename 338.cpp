#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int t;
        for(int i=0;i<=n;i++){
            t=0;
            for(int k=0;k<32;k++){
                if((i>>k) & 1 ==1){
                    t++;
                }
            }
            ans.push_back(t);
        }
        return ans;
    }
};