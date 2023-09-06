#include <iostream>
#include<vector>
using namespace std;


int maxProfit(vector<int>& prices) {
    int smallest_index = 0;
    int best_profit = 0;
    for(int i = 0;i<prices.size();i++){
        if(prices[i]-prices[smallest_index]>best_profit)
            best_profit = prices[i]-prices[smallest_index];
        if(prices[i]<prices[smallest_index])
            smallest_index = i;
    }
    return best_profit;
}