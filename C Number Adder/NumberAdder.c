#include <stdio.h>
#include <unistd.h> // For sleep() and usleep()

int main(){
    int x, y;
    int time = 3; // sleep uses seconds

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);

    int sum = x + y;
    printf("Sum: %d\n", sum);

    sleep(time); // Pause for `time` seconds
    return 0;
}
