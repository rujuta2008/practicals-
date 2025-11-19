#include<stdio.h>
int main
 int maxProfit(int prices[],int n)
 {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {

            minPrice = prices[i];
        } else {

            int profit = prices[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}

int main() {
    int n;

    printf("Enter the number of days: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter the prices for each day:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int result = maxProfit(prices, n);
    if (result > 0) {
        printf("Maximum profit achievable: %d\n", result);
    } else {
        printf("No profit possible.\n");
    }
    return 0;
}
