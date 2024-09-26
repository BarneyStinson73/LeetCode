#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0){
            return ans;
        }
        vector<vector<string>> letters;
        letters.push_back({});
        letters.push_back({});
        letters.push_back({"a","b","c"});
        letters.push_back({"d","e","f"});
        letters.push_back({"g","h","i"});
        letters.push_back({"j","k","l"});
        letters.push_back({"m","n","o"});
        letters.push_back({"p","q","r","s"});
        letters.push_back({"t","u","v"});
        letters.push_back({"w","x","y","z"});
        

    }
};
// @lc code=end

