#include <bits/stdc++.h>
//����� ���ظ� �� ���ߴµ� ȭ��Ʈ�����̽��� �����ϴ� ��.
//�ٸ� �����鿡 ���� ������ �� �����ѵ�.
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