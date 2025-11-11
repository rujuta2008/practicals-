#include <stdio.h>
int main() {
    int n, m;
    printf("Enter the size of table vertically: ");
    scanf("%d", &n);
    printf("Enter the size of table horizontally: ");
    scanf("%d", &m);
    printf("\nMultiplication Table (%d x %d)\n", n, m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }    return 0;
}
