#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        vector<int> positions;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vowels.push_back(s[i]);
                positions.push_back(i);
            }
        }
        int v_size=vowels.size();
        for(int i=0;i<v_size;i++){
            s[positions[i]]=vowels[v_size-1-i];
        }
        return s;
    }
};