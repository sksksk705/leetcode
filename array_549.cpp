#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*bool check[60001];          // ������ ���� ��� ���� �ʰ� �����ð������� XOR�� ����Ѵٸ� �� �� ����.
        memset(check, 0, sizeof(check));
        for (auto n : nums) {
            if (check[n + 30000])
                check[n + 30000] = false;
            else
                check[n + 30000] = true;
        }
        for (int i = 0; i <= 60000; ++i) {
            if (check[i])
                return i-30000;
        }
        return -1;*/
        
        // XOR
        int ans = 0;
        for (auto n : nums)
            ans ^= n;
        cout << ans;
    }
};