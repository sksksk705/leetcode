#include <bits/stdc++.h>
//영어라서 이해를 잘 못했는데 화이트스페이스만 무시하는 듯.
//다른 문제들에 비해 문제가 좀 조악한듯.
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long result = 0;
        int sign = 1;
        int i = s.find_first_not_of(' ');
        if (i > s.size())
            return 0;
        if (s[i] == '-' || s[i] == '+')
            sign = (s[i++] == '-') ? -1 : 1;
        while (isdigit(s[i]))
        {
            result = result * 10 + (s[i++] - '0');
            if (result * sign >= INT_MAX) return INT_MAX;
            if (result * sign <= INT_MIN) return INT_MIN;
        }
        return result * sign;

    }
};