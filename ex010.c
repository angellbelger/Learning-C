#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float real, dolar;

    printf("\nHello, world.");
    
    printf("\nYour money: ");
    scanf("%f", &real);

    dolar = real / 5.28;

    printf("You can to buy: $%f", dolar);

    return 0;
}