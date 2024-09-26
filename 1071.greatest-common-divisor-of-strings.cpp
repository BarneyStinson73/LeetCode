/*
 * @lc app=leetcode id=1071 lang=cpp
 *
 * [1071] Greatest Common Divisor of Strings
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string common = "",choice;
        int i = 0, s = 0,t=0;
        if (str1.size() < str2.size()) {
            s = str1.size();
            t= str2.size();
            choice=str2;
        } else {
            s = str2.size();
            t=str1.size();
            choice=str1;
        }
        while (i < s) {
            if (str1[i] == str2[i] && str1[i] != common[0]) {
                common += str1[i];
            } else {
                if (str1[i] != str2[i]) {
                    return "";
                }
                //  else {
                //     return common;
                //     common += str1[i];
                // }
            }
            i++;
        }
        cout<<"found common:"<<common<<endl;
        for(int i=0;i<t;i++){
            if(common[i%common.size()]!=choice[i]){
                return "";
            }
        }
        return common;
    }
};
// @lc code=end
int main(){
    Solution s;
    cout<<s.gcdOfStrings("ABABAB","ABAB");
}

