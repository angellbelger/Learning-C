#include <stdio.h>


struct books
{
    int code;
    char name[30];
    float value;
};


int main()
{
    struct books product;

    printf("Product Code: ");
    fflush(stdin);
    scanf("%i", &product.code);
    printf("Name: ");
    fflush(stdin);
    gets(product.name);
    printf("Value: ");
    fflush(stdin);
    scanf("%f", &product.value);

    printf("\n\n---------------------------");
    printf("\nProduct Registered\n");
    printf("\nProduct Code: %i", product.code);
    printf("\nProduct Name: %s", product.name);
    printf("\nProduct Value: R$%.2f", product.value);
    printf("\n---------------------------\n\n");


    return 0;
}