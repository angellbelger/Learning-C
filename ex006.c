#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, x_double, x_triple;
    x_double = x * 2;
    x_triple = x * 3;

    printf("Hello, world.\n");
    printf("Type a number: ");
    scanf("%i", x);
    printf("Number: %i\nDouble: %i\nTriple: %i", x, x_double, x_triple);
    
    return x;

}