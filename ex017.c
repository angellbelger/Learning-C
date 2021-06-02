#include <stdio.h>
#include <math.h>

int main()
{
    printf("\nHello, world.\n");

    float opposite_side, adjacent_side, hypotenuse;

    printf("Opposite side: ");
    scanf("%f", &opposite_side);
    printf("Adjacent side: ");
    scanf("%f", &adjacent_side);
    
    hypotenuse = sqrt(pow(opposite_side, 2) + pow(adjacent_side, 2));

    printf("Hypotenuse: %.2f\n\n", hypotenuse);
    
    return 0;
}