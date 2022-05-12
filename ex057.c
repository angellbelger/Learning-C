#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    printf("\nHello, world.\n\n");
    p = (int *) malloc(sizeof(int));

    if (p == NULL) {
        printf("\nerror\n");
    }
    else {
        *p = 10;
        printf("The value of *p: %i\n", *p);
        free(p);

    }
    return 0;
}