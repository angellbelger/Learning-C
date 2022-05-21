#include <stdio.h>

int main(){
    int *ptr;
    
    printf("\nAdress: %p\n\n", ptr);
    ptr = (int *) malloc(sizeof(int));
    printf("\nAdress: %p \nValue: %i\n\n", ptr, *ptr);
    *ptr = 10;
    printf("\nAdress: %p \nValue: %i\n\n", ptr, *ptr);

    int x;
    x = 20;
    ptr = &x;
    printf("\nAdress: %p \nValue: %i\n\n", ptr, *ptr);



    return 0;
}