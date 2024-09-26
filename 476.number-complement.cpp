/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        string binary="";
        int rem=0,i=0,result=0;
        int numbers[31];
        while(num>0){
            rem=num%2;
            rem=abs(rem-1);
            numbers[i]=rem;
            i++;
            num=num/2;
        }
        // cout<<i;
        int iter=i;
        for(int k=0;k<iter;k++){
            result=result+numbers[k]*pow(2,(i-1));
            i--;
        }
        return result;
    }
};
int main(){
    Solution s;
    cout<<s.findComplement(5);
}
// @lc code=end

