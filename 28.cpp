
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0,index=-1;
        for(int t=0;t<haystack.size();t++){
            if(haystack[i]==needle[j]){
                if(j!=needle.size()-1){
                    cout<<"loop 1,h letter:"<<haystack[i]<<"    , needle letter:"<<needle[j]<<"  index:"<<index<<endl;
                    i++;
                    j++;
                }
                else{
                    cout<<"loop2,h letter:"<<haystack[i]<<"    , needle letter:"<<needle[j]<<"  index:"<<index<<endl;
                    index=i-needle.size()+1;
                    cout<<"j is "<<j<<",index:"<<index<<endl;
                    return index;
                }
            }
            else{
                cout<<"loop3,h letter:"<<haystack[i]<<"    , needle letter:"<<needle[j]<<"  index:"<<index<<endl;
                i=i-j+1;
                j=0;
                i++;
            }
        }
        return index;
    }
};
int main(){
    Solution s;
    cout<<s.strStr("mississippi","a");
}