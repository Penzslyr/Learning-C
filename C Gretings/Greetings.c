#include <stdio.h>
#include <ctype.h>
#include <string.h>



int main() {
    char name[100];
    char age[100];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%s", age);

    
    printf("Hello, %s! You are %s years old.\n", name, age);
    return 0;
}
