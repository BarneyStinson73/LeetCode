#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char, int> mp;
        int n=s.size();
        // int i=0,j=0;
        int ans=0,temp_len=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int val=mp[s[j]];
                if(val==0){
                    mp[s[j]]=1;
                    temp_len++;
                    ans=max(ans,temp_len);
                }
                else{
                    mp[s[j]]=0;
                    temp_len=0;
                    break;
            }
        }
    }
    return ans;
};
};

int main() {
    Solution sol;
    string s = "bbbb";
    cout << sol.lengthOfLongestSubstring(s) << endl;
    return 0;
}