#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int chef_time=customers[0][0];
        double delay=0.0;
        for(int i=0;i<customers.size();i++){
            
            if(chef_time>customers[i][0]){
                chef_time+=customers[i][1];
                delay+=chef_time-customers[i][0];
            }
            else{
                delay+=customers[i][1];
                chef_time=customers[i][1]+customers[i][0];
            }
            cout<<"chef time:"<<chef_time<<"     "<<"delay:"<<delay<<endl;
        }
        return delay/customers.size();

    }
};
int main(){
    Solution s;
    vector<vector<int>> customers = {{2, 3}, {6, 3}, {7, 5},{11,3},{15,2},{18,1}};   //[[2,3],[6,3],[7,5],[11,3],[15,2],[18,1]]
    cout<<s.averageWaitingTime(customers);
}