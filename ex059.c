#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\nHello, world.\n");

    int len, i;
    int *vector;

    printf("\nTamanho do vetor: ");
    scanf("%i", &len);
    
    vector = (int *) malloc(sizeof(int) * len);
    for (i = 0; i < len; i++){
        vector[i] = pow(2, i);
        printf("%i\n", vector[i]);
    }
    free(vector);
    return 0;
}