#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("\nHello, world.\n");

  int *gav;

  gav = (int*) malloc( sizeof(int));

  *gav = 10;

  printf("\nThe adress of the generator number is %p\nThe value is %i\n", &gav, *gav);
  free(gav);

  return 0;
}