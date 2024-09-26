#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int strt=0,end=0,pivot=0,max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                strt=i;
                end=i;
                pivot=nums[i];
                max=1;
            }
            else if(nums[i]==pivot){
                // end=i;
                if(end+1==i){
                    end=i;
                    if(max<(end-strt+1)){
                        max=end-strt+1;
                    }
                }
                else{
                    if(max<(end-strt+1)){
                        max=end-strt+1;
                    }
                    strt=i;
                    end=i;
                }

            }

        }
        // cout<<"strt:"<<strt<<"end:"<<end<<"max:"<<max<<"pivot:"<<pivot<<endl;
        return max;
    }
};
// [1,2,3,3,2,2]
int main(){
    vector<int> r={1,2,3,3,2,2};
    Solution s;
    cout<<s.longestSubarray(r);
}