#include <stdio.h>

typedef struct Curso{
   int id;
   char nomeCurso[100];
   int duracao;
   char nomeCoordenador;
}Curso;

typedef struct aluno{
   int ra;
   char aluno[100];
   int dia, mes, ano;
   struct Curso curso;
}aluno;

int main(void){
   printf("\nHello, world.\n");

   return 0;
}