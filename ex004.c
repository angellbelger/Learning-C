#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("\n\nHello, world.\n\n");

    int x = 10;
    float y = 10;
    double w = 10;
    char name;
    short int xr;
    long int xs;
    signed int xt;
    unsigned int xz;

    printf("Size Int -> %lu bytes\n", sizeof(x));
    printf("Size Float -> %lu bytes\n", sizeof(y));
    printf("Size Double -> %lu bytes\n", sizeof(w));
    printf("Size Char -> %lu bytes\n", sizeof(name));
    printf("Size Short Int -> %lu bytes\n", sizeof(xr));
    printf("Size Long Int -> %lu bytes\n", sizeof(xs));
    printf("Size Signed Int -> %lu bytes\n", sizeof(xt));
    printf("Size Unsigned Int -> %lu bytes\n", sizeof(xz));
    
    return 0;
}