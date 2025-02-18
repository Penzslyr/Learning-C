#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findBiggestArr(int a[]){
    int biggest = a[0];
    int amount = 0;
    for(int j=0; j < 10; j++){
        if(a[j]>biggest){
            biggest = a[j];
        }
    }
    for(int i=0; i < 10; i++){
        if(a[i]==biggest){
            amount++;
        }
    }
    printf("\nThe biggest is : %d  with amount : %d", biggest, amount);
}

void findSmallestArr(int a[]){
    int smallest = a[0];
    int amount = 0;
    for(int j=0; j < 10; j++){
        if(a[j]<smallest){
            smallest = a[j];
        }
    }

    for(int i=0; i < 10; i++){
        if(a[i]==smallest){
            amount++;
        }
    }

    printf("\nThe smallest is : %d with amount : %d", smallest, amount);
}

void bubbleSortAsc(int a[]){
    int temp;
    for (int i = 0; i < 10 - 1; i++) {  // Outer loop (controls the number of passes)
        for (int j = 0; j < 10 - 1 - i; j++) {  // Inner loop (swaps adjacent elements)
            if (a[j] > a[j + 1]) {  // Swap if the left element is greater than the right
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nvalue: [");
    for(int h=0; h < 10; h++){
        printf("%d",a[h] );
        if(h!=9){
            printf(",");
        }
    }
    printf("]");
}

int main(){

    int ranNum[10];
    srand(time(NULL));

    printf("value: [");
    for(int i=0; i < 10; i++){
        ranNum[i]= rand() % 100 + 1;
        printf("%d",ranNum[i] );
        if(i!=9){
            printf(",");
        }
    }
    printf("]");
    findBiggestArr(ranNum);
    findSmallestArr(ranNum);
    bubbleSortAsc(ranNum);

}