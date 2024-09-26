/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        result.push_back({});
        for(int i=0;i<nums.size();i++){
            vector<int> temp;
            int t=nums[i];
            temp.push_back(t);
            result.push_back(temp);
        }
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            for(int k=i;k<nums.size();k++){
                for(int l=0;l<nums.size();l++){
                    if(l>=i && l<=k){
                        cout<<"bad porse "<<nums[l]<<endl;
                    }
                    else{
                        cout<<"temp e dhukse "<<nums[l]<<endl;
                        temp.push_back(nums[l]);
                    }
                }
                cout<<"result e dhukai temp"<<endl;
                if(temp.size()!=0)result.push_back(temp);
                temp.clear();
            }
        }
        return result;
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<int> nums={1,2,3,4};
    vector<vector<int>> subsets=s.subsets(nums);
    for (const vector<int>& subset : subsets) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
}