#include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum = 0;
        int buy_price = prices[0];              //ù��° �ֽ��� ��ٰ� ����
        int sell_price = buy_price;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > sell_price) {       //�� ���� �� �� �ִ� ��� �ǸŰ��� ����
                sell_price = prices[i];
                continue;
            }
            else {                              //�� �� �ֽ��� ���� ��� �ְ��� �Ȱ� ���� �ֽ��� ����
                maximum += sell_price - buy_price; 
                buy_price = prices[i];
                sell_price = buy_price;
            }
        }
        maximum += sell_price - buy_price;      //�������� �� �ֽ� ó��
        return maximum;
    }
};