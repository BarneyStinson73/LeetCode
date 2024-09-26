#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int maxProfit(vector<int>& prices) {
    //     int profit=-9;
    //     for(int i=0;i<prices.size();i++){
    //         for(int j=i+1;j<prices.size();j++){
    //             int t;
    //             t=prices[j]-prices[i];
    //             if(t>profit){
    //                 profit=t;
    //             }
    //         }
    //     }
    //     if(profit<=0)
    //         return 0;
    //     else
    //         return profit;
    // }
    int maxProfit(vector<int>& prices) {
        int profit=0,anchor=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<anchor){
                anchor=prices[i];
                // profit=0;
            }
            else{
                if((prices[i]-anchor)>profit){
                    profit=(prices[i]-anchor);
                }
            }
        }
        return profit;
    }
};