#include<iostream>
using namespace std; 

int max_profit(int prices[]){
    int buy = prices[0];
    int profit=0;
    int len = sizeof(prices);

    for(int i=0; i < len;i++){
        if(buy > prices[i]){
            buy=prices[i];
        }
        else if(prices[i] - buy > profit){
            profit = prices[i] - buy;
        }
        else{
            return 0;
        }
    }
    return profit;
}

int main(){
    int prices[6] = {71,5,3,6,4};
    cout << max_profit(prices) <<endl;
    return 0;
}