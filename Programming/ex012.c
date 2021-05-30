#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nHello, world.");

    float value, new_value;

    printf("\nProduct value: us$");
    scanf("%f", &value);

    new_value = value * 0.95;

    printf("New value: us$%.2f", new_value);

    return 0;
}