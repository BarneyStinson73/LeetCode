/*
 * @lc app=leetcode id=1823 lang=cpp
 *
 * [1823] Find the Winner of the Circular Game
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> ans;
        if (n == 1)
            return 1;
        for (int i = 1; i <= n; i++) {
            ans.push_back(i);
        }

        int current_index = 0;
        while (ans.size() > 1) {
            current_index = (current_index + k - 1) % ans.size();
            ans.erase(ans.begin() + current_index);
        }
        return ans[0];
    }
};

// @lc code=end

int main(){
    Solution s;
    cout<<s.findTheWinner(5,2);
}