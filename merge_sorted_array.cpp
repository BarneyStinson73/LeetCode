#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        vector<int> temp;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]==0 && n!=0){
                n--;
            }
            
            else{
                temp.push_back(nums1[i]);
            }
        }
        nums1.swap(temp);
        
    }
};
int main(){
    vector<int> nums1 = {-1,0,0,3,3,3,0,0,0};
    vector<int> nums2 = {1,2,2};
    Solution s;
    s.merge(nums1,6,nums2,3);
    // cout<<nums1.size()<<endl;
    for(int i=0;i<nums1.size();i++)
    cout<<nums1[i]<<",";
}