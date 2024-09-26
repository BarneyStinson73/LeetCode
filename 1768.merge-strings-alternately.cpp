/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int i=0;
        while(true){
            if(i>word1.size() && i>word2.size()){
                break;
            }
            if(i<word1.size()){
                result+=word1[i];
            }
            if(i<word2.size()){
                result+=word2[i];
            }
            i++;
        }
        return result;
    }
};
// @lc code=end
int main(){
    Solution s;
    cout<<s.mergeAlternately("abc","pqr");
}

