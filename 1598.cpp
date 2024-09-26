#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(int i=0;i<logs.size();i++){
            // cout<<"count:"<<count;
            if(logs[i]=="../"){
                if(count!=0)count--;
            }
            else if(logs[i]=="./"){
            }
            else{
                count++;
            }
        }
        return count;
    }
};
int main(){
    vector<string> t={"./","../","./"};
    Solution s;
    cout<<s.minOperations(t);
    
}