#include <stdio.h>

int main()
{
    float x, value;
    printf("\nHello, world.\n");

    printf("Distance in Km: ");
    scanf("%f", &x);

    if ( x <= 200 )
    {
        value = x * 0.5;

        printf("Ticket value: R$%.2f\n", value);
    }
    else
    {
        value = x * 0.45;

        printf("Ticket value: R$%.2f\n", value);
    }

    return 0;
}