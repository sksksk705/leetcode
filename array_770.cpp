#include <bits/stdc++.h>
//swap and reverse ����� ����
//���� ��Ī ���� �� ���� �Ųٷ�
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        stack<int> s;
        int n = matrix.size();
        for (int i = n - 1; i >= 0; --i)
            for (int j = 0; j < n; ++j)
                s.push(matrix[j][i]);

        for (int i = 0; i < n;++i)
            for (int j = 0; j < n; ++j) {
                matrix[i][j] = s.top();
                s.pop();
            }
    }
};