#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //easy way
        /*for (int i = 0; i < nums.size()-1; ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target)
                    return vector<int>{i, j};
            }
        }
        return vector<int>();*/

        //fast way
        unordered_map<int, int> need;
        for (int i = 0; i < nums.size(); ++i) {
            if (need[nums[i]])                      
                return vector<int>{need[nums[i]] - 1,i}; 
            need[target - nums[i]] = i+1;               
        }
        return vector<int>();
    }
};