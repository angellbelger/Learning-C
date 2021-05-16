#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, x_double, x_triple;
    float x_sqrt;
    x_double = x * 2;
    x_triple = x * 3;
    x_sqrt = sqrt(x);


    printf("Hello, world.\n");
    printf("Type a number: ");
    scanf("%i", x);
    printf("Number: %i\nDouble: %i\nTriple: %i\n square: %f", x, x_double, x_triple, x_sqrt);
    
    return x;

}