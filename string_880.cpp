#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        int start = 0;
        int end = s.size() - 1;
        if (s[start] == '-')
            start++;
        while (start < end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++; end--;
        }
        try { stoi(s); }
        catch (...) {
            return 0;
        }
        return stoi(s);
    }
};