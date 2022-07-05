#include <stdio.h>
#include <stdlib.h>

//Aplica o método do Bubblesort
int Bubblesort (int vec[]){
   int i, j, tmp, tamanho;
   
   for (i = 0; i < tamanho -1; i++){
      for (j = i+1; j < tamanho; j++){
         if (vec[i] < vec[j]){
            troca(&vec[i], &vec[j]);
        }
     }
   }
}
//Considere que a função troca() inverte as posições dos parâmetros vec[i] e vec[j] dentro do vetor