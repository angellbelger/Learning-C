#include <stdio.h>
#include <string.h>

int main()
{
    int number;
    char result[5];

    printf("\nHello, world.\n");
    printf("Type a number: ");
    scanf("%i", &number);

    strcpy(result, ( number % 2 == 0 ) ?"Even":"Odd");

    printf("Your number %i is %s.\n", number, result);

    return 0;
}