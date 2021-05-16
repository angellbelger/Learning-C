#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, x_double, x_triple;
    x_double = x * 2;
    x_triple = x * 3;

    printf("Hello, world.\n");
    printf("Type a number: ");
    scanf("%f", x);
    printf("Number: %f\nDouble: %f\nTriple: %f", x, x_double, x_triple);
    
    return x;

}