#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // bool isValid(string s) {
    //     stack<char> temp;
    //     for(int i=0;i<s.length();i++){
    //         if(s[i]!='/0')
    //          temp.push(s[i]);
    //     }
    //     char check;
    //     while(!temp.empty()){
            
    //         check=temp.top();
    //         temp.pop();
    //         cout<<"check is "<<check<<",top is "<<temp.top()<<endl;
    //         if(check==')' && temp.top()=='('){
    //             temp.pop();
    //         }
    //         else if(check=='}' && temp.top()=='{'){
    //             temp.pop();
    //         }
    //         else if(check==']' && temp.top()=='['){
    //             temp.pop();
    //         }
    //         else{
    //             return false;
    //         }

    //     }
    //     return true;

    // }
    bool isValid(string s){
        stack<char> temp;
        for(int i=0;i<s.length();i++){
            if(temp.empty() && (s[i]==')' || s[i]=='}' || s[i]==']'))
                return false;
            if(s[i]==')'){
                if(temp.top()=='('){
                    temp.pop();
                }
                else
                return false;
            }
            else if(s[i]=='}'){
                if(temp.top()=='{'){
                    temp.pop();
                }
                else
                return false;
            }
            else if(s[i]==']'){
                if(temp.top()=='['){
                    temp.pop();
                }
                else
                return false;
            }
            else{
                temp.push(s[i]);
            }
        }
        if(temp.empty())
            return true;
        else
        return false;
    }
};

int main(){
    Solution s;
    s.isValid("(){}}{");
    return 0;
}