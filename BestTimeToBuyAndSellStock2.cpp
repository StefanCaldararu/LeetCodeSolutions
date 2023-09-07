#include <iostream>
#include<vector>
using namespace std;

    
int maxProfit(vector<int>& prices) {
    int profit = 0;
    int current_profit = 0;
    int buy = 0;
    for(int i = 0;i<prices.size();i++){
        if(prices[i]-prices[buy]>current_profit){
            current_profit = prices[i]-prices[buy];
        }
        else{
            profit = profit+current_profit;
            buy = i;
            current_profit = 0;
        }
    }
    profit = profit+current_profit;
    return profit;
}

int main(){
    // isPalindrome(101);
    std::vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    std::cout << "result: " << maxProfit(nums) << "\n";
    return 0;
}