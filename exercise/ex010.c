#include <stdio.h>

int main(){
    char product[20];
    float price, newPrice, discount;

    printf("\nProduct: ");
    gets(product);
    printf("\nPrice: ");
    scanf("%f", &price);
    printf("\nDiscount(%%): ");
    scanf("%f", &discount);
    newPrice = price - (price * discount / 100);
    printf("The value of the %s is u$%.2f, with discount of %.1f%% the new value is u$%.2f\n", product, price, discount, newPrice);
}