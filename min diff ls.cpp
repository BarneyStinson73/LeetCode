#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int index;
        sort(nums.begin(), nums.end(), greater<int>());
        if(nums.size()==1 || nums.size()==2 || nums.size()==3)
            return 0;
        int high=nums[0],diff=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<high){
                diff=high-nums[i];
                break;
            }
        }
        if(diff==0){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            if(i>2){
                index=i;
                break;
            }
            nums[i]=nums[nums.size()-1];
        }
        int check=nums[index]-nums[nums.size()-1];
        if(check<diff)
            return check;
        else return diff;

    }
};


int main() 
{  // [20,66,68,57,45,18,42,34,37,58]
    vector<int> v{ 6,6,0,1,1,4,6 }; 
    Solution s;
    cout<<s.minDifference(v);
  
    return 0; 
}