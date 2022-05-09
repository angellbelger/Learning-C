#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int myNumber, numberPc;

    numberPc = rand() % 5 + 1;

    printf("\nhello, world.\n");

    printf("I am thinking a number beetween 1 and 5, can you guess what it is? ");
    scanf("%i", &myNumber);
    printf("My number is %i, your number is %i.\n", numberPc, myNumber);
}