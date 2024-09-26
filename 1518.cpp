#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,reminder,iterar=numBottles/numExchange;
        while(iterar!=0){
            ans+=iterar;
            reminder=numBottles%numExchange;
            numBottles=iterar+reminder;
            iterar=numBottles/numExchange;

        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.numWaterBottles(9,3);
}