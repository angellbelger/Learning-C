#include <stdio.h>

int main()
{
    char product[10];
    float value, newValue, discount;
    printf("Product: ");
    gets(product);
    printf("%s value R$: ", product);
    scanf("%f", &value);
    printf("Discount amount (%%): ");
    scanf("%f", &discount);

    discount = discount / 100;
    newValue = value - ( value * discount);

    printf("\nOlder value: R$%.2f", value);
    printf("\nNew value: R$%.2f\n", newValue);

}