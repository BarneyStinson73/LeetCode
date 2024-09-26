/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int duplicate=nums[0],count=1,neg=0;
        for(int i=1;i<nums.size();i++){
            if(duplicate==nums[i] ){
                // cout<<"duplicate:"<<duplicate<<"   count:"<<count<<"    nums[i]:"<<nums[i]<<endl;
               if(count==2){
                nums[i]=1000000;
                neg++;
               } 
               else count++;
            //    neg++;
               // cout<<"after condition checking,duplicate:"<<duplicate<<"   count:"<<count<<"    nums[i]:"<<nums[i]<<endl<<endl;
            }
            else{
                
                duplicate=nums[i];
                count=1;
                // cout<<"in else duplicate:"<<duplicate<<"     count:"<<count<<"         nums[i]:"<<nums[i]<<endl<<endl;
            }
        }
        sort(nums.begin(),nums.end());
        cout<<"neg is:"<<neg<<endl;
        return nums.size()-neg;

    }
};
// @lc code=end
int main(){
    Solution s;
    vector<int> t{1,1,1,2,2,3};
    cout<<s.removeDuplicates(t);
}

