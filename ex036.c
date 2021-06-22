#include <stdio.h>

int main()
{
    int number, predecessor, successor;
    printf("\nHello, world.\n");

    printf("\nType a number: ");
    scanf("%i", &number);

    successor = number + 1;
    predecessor = number - 1;

    printf("Predecessor: %i\nSuccessor: %i\n", predecessor, successor);

    return 0;
}