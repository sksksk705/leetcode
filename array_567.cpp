#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] == 0)
            {
                for (int j = i + 1; j < nums.size(); ++j)
                {
                    nums[i] += nums[j];
                    if (nums[i]) {
                        nums[j] = 0;
                        break;
                    }
                }
            }
        }*/
        int i = 0;
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
        }
    }
};