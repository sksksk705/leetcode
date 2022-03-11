#include <bits/stdc++.h>
//XOR을 사용하면 좀 더 쉽게 할 수 있었음.
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        queue<pair<int,int>> q;
        
        for (int i = 0; i < 9; ++i)
            for (int j = 0; j < 9; ++j)
                if ((board[i][j]) != '.')
                    q.push(make_pair(i, j));

        while (!q.empty()) {
            int nowrow = q.front().first;
            int nowcol = q.front().second;
            char value = board[nowrow][nowcol];
            q.pop();

            //check horizontal
            for (int row = 0; row < 9; ++row) {
                if (row == nowrow)
                    continue;
                if (board[row][nowcol] == value)
                    return false;
            }

            //check vertical
            for (int col = 0; col < 9; ++col) {
                if (col == nowcol)
                    continue;
                if (board[nowrow][col] == value)
                    return false;
            }

            //chck box
            int versec = nowrow / 3;
            int horsec = nowcol / 3;
            for (int row = versec*3; row < versec*3+3; ++row) {
                for (int col = horsec * 3; row < horsec * 3 + 3; ++col) {
                    if (row == nowrow && col == nowcol)
                        continue;
                    if (board[row][col] == value)
                        return false;
                }
            }
        }
        return true;
    }
};