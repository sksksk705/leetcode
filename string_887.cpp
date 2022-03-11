#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string common = "";
        for (int i = 0; i < strs.front().size(); ++i) {
            if (strs.front()[i] == strs.back()[i])
                common += strs.front()[i];
            else
                break;
        }
        return common;
    }
};