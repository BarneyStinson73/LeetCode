#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        int count=1,direction=1;
        while(time!=0){
            if(direction==1 && count<n){
                count++;
                // "direction:"<<direction<<"count:"<<count<<"time:"<<time-1<<endl;
            }
            else if(direction==1 && count==n){
                direction=-1;
                count--;
                // "direction:"<<direction<<"count:"<<count<<"time:"<<time-1<<endl;
            }
            else if(direction==-1){
                int temp=count-1;
                if(temp<=0){
                    direction=1;
                    count++;
                }
                else
                count=temp;
                // "direction:"<<direction<<"count:"<<count<<"time:"<<time-1<<endl;
            }
            time--;
        }
        return count;
    }
};
int main(){
    Solution s;
    // s.passThePillow(2,341);
}