/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */
#include <bits/stdc++.h>
using namespace std;


// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if((s[i]>=48 && s[i]<=57) || (s[i]>=97 && s[i]<=122)){
                temp+=s[i];
            }
            else if(s[i]>=65 && s[i]<=90){
                temp+=s[i]+32;
            }
            else{

            }
        }
        
        string t=temp;
        reverse(temp.begin(),temp.end());
        // cout<<temp<<endl;
        if(temp==t){
            return true;
        }
        else
            return false;
    }
};

// @lc code=end
int main(){

    Solution s;
    cout<<s.isPalindrome("race a car");
}

