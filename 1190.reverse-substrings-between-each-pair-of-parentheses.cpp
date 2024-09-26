/*
 * @lc app=leetcode id=1190 lang=cpp
 *
 * [1190] Reverse Substrings Between Each Pair of Parentheses
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> temp;
        int i=0;
        // cout<<s.size()<<endl;
        string ongoing="";
        while((i+1)<=s.size()){
            if(s[i]=='(' ){
                // cout<<ongoing<<" encountered ("<<endl;
                if(i!=0){
                   temp.push(ongoing);
                    ongoing="";
                }
            }
            else if(s[i]==')' && i!=s.size()-1){
                // cout<<ongoing<<" ongoing dekhi )"<<endl;
                if(ongoing!="")
                {
                    reverse(ongoing.begin(),ongoing.end());
                    if(!temp.empty()){

                    ongoing=temp.top()+ongoing;
                    temp.pop();
                    }
                    temp.push(ongoing);
                }
                else{
                    if(!temp.empty()){

                    ongoing=temp.top();
                    temp.pop();
                    }
                    reverse(ongoing.begin(),ongoing.end());
                    if(!temp.empty()){

                    ongoing=temp.top()+ongoing;
                    // cout<<ongoing<<" taking from top reversed and added to the top"<<endl;
                    temp.pop();
                    }
                    temp.push(ongoing);
                }
                ongoing="";
            }
            else if(s[i]==')' && i==s.size()-1){
                if(!temp.empty()){
                    ongoing=temp.top()+ongoing;
                    // cout<<ongoing<<" reversed and added to the top"<<endl;
                    temp.pop();
                }
                    
                    temp.push(ongoing);
            }
            else{
                ongoing+=s[i];
            }
            i++;
        }
        reverse(temp.top().begin(),temp.top().end());
        return temp.top();
    }
};
// @lc code=end
int main(){
    Solution z;
    cout<<z.reverseParentheses("(abcd)");   

}
