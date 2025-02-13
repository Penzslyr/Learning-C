#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){  // argc is the number of arguments, argv is the array of arguments
    
    int result = 0; // result is the sum of the arguments

    // input from the command line is a string, so we need to convert it to an integer
    result = atoi(argv[1]) + atoi(argv[2]); // atoi converts the string arguments to integers 
   

    printf("Result: %d\n", result);
    return 0;
}
