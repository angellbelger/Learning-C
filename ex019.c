#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    float velocity, value;

    printf("Velocity in Km/h: ");
    scanf("%f", &velocity);

    if (velocity <= 80)
    {
        printf("\nHave a good day.\n");
    }else{
        printf("\nAttention! You were mutated");

        value = (velocity - 80) * 7;

        printf("\nValue: R$%.2f\n", value);

    }

    return 0;

}