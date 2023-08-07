#include <iostream>

int main() {
    int prices[] = {7,1,5,3,6,4};
    int n = std::size(prices);
    
    int minimumPrice = prices[0];
    int maxProfit = 0;
    for(int i=0; i<n; i++) {
        if(minimumPrice > prices[i]) {
            minimumPrice =  prices[i];
        } else if(prices[i] - minimumPrice > maxProfit) {
            maxProfit = prices[i] - minimumPrice;
        }
    }
    std::cout << maxProfit;

    return 0;
}

 Time complexity: O(n),
 Space complexity: O(1)