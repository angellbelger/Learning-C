#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, x_double, x_triple;
    float x_sqr;

    printf( "Hello, world.\n" );
    printf( "Type a number: ");
    scanf("%i", &x);
    printf( "Number: %i" , x);

    x_double = x * 2;
    printf( "\nDouble: %i", x_double);

    x_triple = x * 3;
    printf( "\nTriple: %i" , x_triple);

    x_sqr = sqrt(x);
    printf( "\nSquare: %f", x_sqr);
    
    return x;
}