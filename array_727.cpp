#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1;
        while (j < nums.size()) {
            if (nums[i] != nums[j]) {
                i++; j++;
                continue;
            }
            else {
                while (j < nums.size() && nums[i] == nums[j]) {         //순서 반대로 하면 runtime error
                    j++;
                }
                if (j == nums.size())
                    break;
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};