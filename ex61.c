#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) malloc(sizeof(int));

    *ptr = 42;
    printf("\nAdress: %p\nValue: %i\n", ptr, *ptr);

    return 0;
}