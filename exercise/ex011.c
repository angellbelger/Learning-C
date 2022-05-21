#include <stdio.h>

int number;

int main(){
    printf("\nHello, world.\n");
    printf("\nType a number: ");
    scanf("%i", &number);

    if (number % 2 == 0)
        printf("The number %i is Even.\n", number);
    
    else
        printf("The number %i is Odd.\n", number);

    return 0;
}