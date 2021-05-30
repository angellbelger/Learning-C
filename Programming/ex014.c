#include <stdio.h>

int main()
{
    float c, f;

    printf("\nHello, world.\n");
    printf("\nTemperature in ˚C: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("%.2f˚C in = %.2f˚F\n", c, f);

    return 0;
}