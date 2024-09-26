#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> r;
        int count=words.size();
        for(int i=0;i<allowed.size();i++){
            r[allowed[i]]=1;
        }
        for(int i=0;i<words.size();i++){
            for(int k=0;k<words[i].size();k++){
                if(r[words[i][k]]!=1){
                    count--;
                    break;
                }      
            }
        }
        return count;
    }
};