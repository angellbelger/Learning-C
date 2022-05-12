#include <stdio.h>

int xi;
int *ptr_xi;

void print() {
    printf("\nThe valie of xi = %i", xi);
    printf("\nThe valie of &xi = %p", &xi);
    printf("\nThe valie of ptr_xi = %p", ptr_xi);
    printf("\nThe valie of *ptr_xi = %i\n", *ptr_xi);
}

int main(){
    printf("\nHello, world.\n");
    xi = 20;
    ptr_xi = &xi;
    print();

    xi = 7;
    ptr_xi = &xi;
    print();

    xi = 10;
    ptr_xi = &xi;
    print();
    
    return 0;
}