#include <stdio.h>

int main(){
    int x, y;
    int choice;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            printf("Sum: %d\n", x + y);
            break;
        case 2:
            printf("Difference: %d\n", x - y);
            break;
        case 3:
            printf("Product: %d\n", x * y);
            break;
        case 4:
            printf("Quotient: %d\n", x / y);
            break;
    }
}