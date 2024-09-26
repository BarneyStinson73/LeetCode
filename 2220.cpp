#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int change=start^goal,count=0;
        for(int i=0;i<32;i++){
            if(change>>i & 1==1){
                count++;
            }
        }
        return count;
    }
};