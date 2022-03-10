#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        queue<int> save;
        k %= nums.size();
        for (int i = nums.size() - k; i < nums.size(); ++i) {
            save.push(nums[i]);
        }
        for (int i = 0; i < nums.size() - k; ++i) {
            save.push(nums[i]);
        }
        int idx = 0;
        while (!save.empty()) {
            nums[idx] = save.front();
            save.pop();
            idx++;
        }
    }
};