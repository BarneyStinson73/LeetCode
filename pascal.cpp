#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> temp;
        vector<vector<int>> ans;
        if(numRows==1){
            temp.push_back(1);
            ans.push_back(temp);
            return ans;
        }
        if(numRows==2){
            temp.push_back(1);
            ans.push_back(temp);
            temp.push_back(1);
            ans.push_back(temp);
            return ans;
        }
        temp.push_back(1);
        ans.push_back(temp);
        temp.push_back(1);
        ans.push_back(temp);
        for(int i=3;i<=numRows;i++){
            vector<int> tt;
            tt.push_back(1);
            for(int j=0;j<temp.size()-1;j++){
                tt.push_back(temp[j]+temp[j+1]);
            }
            tt.push_back(1);
            ans.push_back(tt);
            temp=tt;

        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> gg;
    gg=s.generate(5);
    for(int i=0;i<gg.size();i++){
        for(int j=0;j<gg[i].size();j++){
            cout<<gg[i][j]<<",";
        }
        cout<<endl;
    }
}

