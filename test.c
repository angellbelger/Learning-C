#include <stdio.h>  
int main(int argc, char **argv) {  
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};  
    int i = 0, temp;  
    while (i < 10){  
        temp = vetor[i];  
        vetor[i] = vetor[9-i];  
        vetor[9-i] = temp;  
        printf("%d ",vetor[i]);  
        i++;              
    }  
} 