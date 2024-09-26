#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        // int max_1=height[0],max_2=height[1],ind1=0,ind2=1;
        // if(height[0]>height[1]){
        //     max_1=height[1];
        //     max_2=height[0];
        //     ind1=1;
        //     ind2=0;
        // }
        // for(int i=0;i<height.size();i++){
        //     if(height[i]>=max_1 || height[i]>=max_2){
        //         if(height[i]>=max_1 ){
        //             int prev_area=abs(max_1*(ind2-ind1));
        //             // int new_area=abs((max_1-height[i])*(ind2-i));
        //             if(height[i]>=max_2){
        //                 // int prev_area=abs((max_2-max_1)*(ind2-ind1));
        //                 int new_area=abs((max_2)*(ind2-i));
        //                 if(new_area>prev_area){
        //                     max_1=max_2;
        //                     max_2=height[i];
        //                     ind1=ind2;
        //                     ind2=i;
        //                 }
        //             }
        //             else{
        //                 int new_area=abs((height[i])*(ind2-i));
        //                 if(new_area>prev_area){
                            
        //                     max_1=height[i];
        //                     ind1=i;
        //                 }
        //             }
        //         }
        //         else{
        //             int prev_area=abs((max_2-max_1)*(ind2-ind1));
        //                 int new_area=abs((max_2)*(ind2-i));
        //                 if(new_area>prev_area){
        //                     max_1=max_2;
        //                     max_2=height[i];
        //                     ind1=ind2;
        //                     ind2=i;
        //                 }
        //         }
        //     }
        // }
        // return abs((max_1)*(ind2-ind1));
        int left=0,right=height.size()-1,iterator=0;
        int area1,area2,area3;
        while(iterator<=height.size()/2+1){
            area1=(height[left]<height[right]?height[left]:height[right])*(right-left);
            area2=(height[iterator]<height[right]?height[iterator]:height[right])*(right-iterator);
        }
    }
};