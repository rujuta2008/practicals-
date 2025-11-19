#include <stdio.h>

void SavingsSeries(int n);

int main() {
    int n;
    printf("Enter the number of months: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of months must be positive.\n");
    } else {
        SavingsSeries(n);
    }
    return 0;
}

void SavingsSeries(int n) {
    int savings1 = 1, savings2 = 1, savings_next;
    printf("Savings series for %d months:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("Month %d: ₹%d\n", i, savings1);
        } else if (i == 2) {
            printf("Month %d: ₹%d\n", i, savings2);
        } else {
            savings_next = savings1 + savings2;
            printf("Month %d: ₹%d\n", i, savings_next);
            savings1 = savings2;
            savings2 = savings_next;
        }
    }
}
