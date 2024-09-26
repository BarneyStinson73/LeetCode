#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

    // Generate and print all permutations
    do {
        ans.push_back(nums);
    } while (std::next_permutation(nums.begin(), nums.end()));

    return ans;
    }
};

// int main(){
//     vector<int> v{1,2,3};
//     vector<vector<int>> ans;
//     Solution s;
//     ans=s.change(v);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<3;j++){
//             cout<<ans[i][j]<<",";
//         }
//         cout<<endl;
//     }
// }