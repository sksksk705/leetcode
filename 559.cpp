#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size() - 1;
        digits[idx]++;
        while (digits[idx] > 9) {
            if (idx == 0) {
                digits.insert(digits.begin(), 1);
                digits[1] = 0;
                break;
            }
            digits[idx] = 0;
            digits[--idx] += 1;
        }
        return digits;
    }
};