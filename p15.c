#include <stdio.h>
#include <unistd.h>  // for sleep() function
int main() {
    int seconds;
    printf("Enter number of seconds for countdown: ");
    scanf("%d", &seconds);
    while (seconds > 0) {
        printf("%d\n", seconds);
        sleep(1);   // wait for 1 second
        seconds--;  // decrement by 1
    }    printf("Countdown completed!\n");
    return 0;
}
