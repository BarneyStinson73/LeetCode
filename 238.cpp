#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left=1,right=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==0){
                right=0;
                break;
            }
            right*=nums[i];
        }
        vector<int> ans;
        ans.push_back(right);
        for(int i=1;i<nums.size();i++){
            left*=nums[i-1];
            // if(right==0){
            //     if(nums[i]!=0){
            //         right=0;
            //     }
            //     else{
            //         for(int k=i+1;k<nums.size();k++){
            //             if(nums[k]==0){
            //                 right=0;
            //                 break;
            //            }
            //              right*=nums[k];
            //         }
            //     }
            // }
            // else{
            //     right/=nums[i];
            // }
            right=1;
                    for(int k=i+1;k<nums.size();k++){
                        
                        if(nums[k]==0){
                            right=0;
                            break;
                       }
                         right*=nums[k];
                    }
            ans.push_back(left*right);
        }
        return ans;


        
    }
};


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        // Calculate the product of elements to the left of each index
        for (int i = 1; i < n; ++i) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        // Calculate the product of elements to the right of each index
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            answer[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return answer;
    }
};