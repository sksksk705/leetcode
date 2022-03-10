#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int temp[1001];         //unordered_map�� ����ϴ� �� �� ������;
        vector<int> ans;    
        memset(temp, 0, sizeof(temp));
        for (auto n : nums1) {
            temp[n]++;
        }
        for (auto n : nums2) {
            if (temp[n]) {
                ans.push_back(n);
                temp[n]--;
            }
        }

    }
};