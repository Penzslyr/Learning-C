#include <stdio.h>

int main(){
    int x;
    x = 23;
    char name[] = "Bro";
    char grade = 'C';
    float gpa = 3.05;


    printf("Hello %s\n", name);
    printf("You are %d age years old\n", x);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f", gpa);
    return 0;
}