#include <stdio.h>
#include <math.h>

int main()
{
    printf("\nHello, world.\n");

    int x;

    printf("\nType a number: ");
    scanf("%i", &x);

    printf("Sin: %f\nCos: %f\nTg: %f\n", sin(x), cos(x), tan(x));

    return 0;
}