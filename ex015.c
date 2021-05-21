#include <stdio.h>

int main()
{
    int day;
    float km, cost;

    printf("\nHello, world.");
    printf("\nFor how many days the car has been rented: ");
    scanf("%i", &day);
    printf("How many km traveled: ");
    scanf("%f", &km);

    cost = day * 60 + km * 0.15;

    printf("Cost: R$%.2f\n", cost);

    return 0;
}