#include <stdio.h>

int main(){
    int x, xDouble;
    float thirdPart;

    printf("\nHello, world.\n");
    printf("Type a number: ");
    scanf("%i", &x);

    xDouble = x * 2;
    thirdPart = x / 3;
    printf("\nYour number is %i, its double is %i, and its third part is %.2f\n", x, xDouble, thirdPart);

    return 0;
}