#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        char temp=chars[0];
        int count=1;
        for(int i=1;i<chars.size();i++){
            cout<<"start of loop, temp:"<<temp<<",chars[i]:"<<chars[i]<<endl;
            if(chars[i]==temp){
                count++;
            }
            else{
                ans.push_back(temp);
                temp=chars[i];
                if(count!=1){
                    // ans.push_back(char(count));
                    string ss=to_string(count);
                    for(char c:ss){
                        ans.push_back(c);
                    }
                }
                count=1;
            }

            cout<<"end of loop, temp:"<<temp<<",chars[i]:"<<chars[i]<<endl;
        }
        ans.push_back(temp);
        if(count!=1){
            string ss=to_string(count);
            for(char c:ss){
                ans.push_back(c);
            }
        }
        chars=ans;
        for(char c:chars){
            cout<<c;
        }
        return chars.size();
    }
};