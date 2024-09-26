#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int mask[1001];
        for(int i=0;i<1001;i++){
            mask[i]=0;
        }
        for(int i=0;i<arr1.size();i++){
            mask[arr1.at(i)]++;
        }
        vector<int> ans;
        // int j=0;
        for(int j=0;j<arr2.size();j++){
            int temp=mask[arr2[j]];
            for(int k=0;k<temp;k++){
                ans.push_back(arr2[j]);
            }
            mask[arr2[j]]=0;
        }
        for(int j=0;j<1001;j++){
            int temp=mask[j];
            for(int k=0;k<temp;k++){
                ans.push_back(j);
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
}