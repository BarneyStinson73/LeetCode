#include <bits/stdc++.h>
#include <algorithm> // For std::max_element
#include <iterator>
using namespace std;
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        int count[n];
        for(int p=0;p<n;p++){
            count[p]=0;
        }
        vector<int> t;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                count[roads[i][j]]++;
            }
        }        
        int* maxElement = max_element(count.begin(), count.end());

    // Calculate the index of the maximum element
    int index = distance(begin(count), maxElement);

    }
};