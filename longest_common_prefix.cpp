#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int min_length(vector<string>& strs) {
        int min = INT_MAX;
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].length() < min)
                min = strs[i].length();
        }
        return min;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string t = "";
        int min = min_length(strs);

        for (int i = 0; i < min; i++) {
            char current_char = strs[0][i];
            bool temp = true;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != current_char) {
                    temp = false;
                    break;
                }
            }
            if (!temp) {
                return t;
            } else {
                t += current_char;
            }
        }
        return t;
    }
};

int main() {
    std::vector<std::string> strs = {"dog","racecar","car"};
    Solution s;
    cout << s.longestCommonPrefix(strs) << endl;
}
