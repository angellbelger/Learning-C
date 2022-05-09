#include <stdio.h>

int main(){
    int x, prede, succe;

    printf("\nType a number: ");
    scanf("%i", &x);

    prede = x - 1;
    succe = x + 1;

    printf("The predecessor to %i is %i, and the successor to %i is %i\n", x, prede, x, succe);

}