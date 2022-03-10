#include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum = 0;
        int buy_price = prices[0];              //첫번째 주식을 산다고 가정
        int sell_price = buy_price;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > sell_price) {       //더 높게 팔 수 있는 경우 판매가를 높임
                sell_price = prices[i];
                continue;
            }
            else {                              //더 싼 주식이 있을 경우 최고가에 팔고 새로 주식을 구매
                maximum += sell_price - buy_price; 
                buy_price = prices[i];
                sell_price = buy_price;
            }
        }
        maximum += sell_price - buy_price;      //마지막에 산 주식 처분
        return maximum;
    }
};