/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int first[128],second[128],map[128];
        for(int i=0;i<128;i++){
            first[i]=0;
            second[i]=0;
            map[i]=0;
        }
        int fsize=s.size();
        for(int i=0;i<fsize;i++){
                first[s[i]]++;
                second[t[i]]++;
            if(first[s[i]]!=second[t[i]]){
                // cout<<"first[s[i]]:"<<first[s[i]]<<",second[t[i]]:"<<second[t[i]]<<",s[i]:"<<s[i]<<",t[i]:"<<t[i]<<" false run"<<endl;
                return false;
            }
            else{
                // cout<<"first[s[i]]:"<<first[s[i]]<<",second[t[i]]:"<<second[t[i]]<<",s[i]:"<<s[i]<<",t[i]:"<<t[i]<<endl;
                if(map[s[i]]==0){
                    map[s[i]]=t[i];
                }
                else{
                    if(map[s[i]]!=t[i]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

// s= "bbbaaaba"    "aaabbbba"   output true actually false
// @lc code=end
int main(){

    Solution s;
    s.isIsomorphic("bbbaaaba","aaabbbba");
}

