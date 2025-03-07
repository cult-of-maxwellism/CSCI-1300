#include<iostream>

using namespace std;
/*Best Time to Buy and Sell a House
Flipping is a real estate strategy that involves buying homes and selling them for a profit in a short period of time.
You want to maximize your profit by choosing a single day to buy a house and choosing a different day in the future to sell that house.
*/
int maxProfit(int prices[], const int NUM_MONTHS) {
    int profit = 0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        for (int j = i; j < NUM_MONTHS; j++) {
            if ((prices[j]-prices[i]) >= profit) {
                profit = prices[j]-prices[i];
            }
            
        }
    }
    //just in case
    if (profit < 0) {
        profit = 0;
    }
    return profit;
}

//cout << "buy month " << i << " at $" << prices [i] << " sell month " << j << " at $" << prices[j] << endl;

int main()
{
    const int NUM_MONTHS = 6;
    int prices[NUM_MONTHS] = {700000, 100000, 500000, 300000, 600000, 400000};
    int profit = maxProfit(prices, NUM_MONTHS);
    cout << "Maximum profit: " << profit << endl;
    return 0;
}

// OUTPUT
// Maximum Profit: 500000