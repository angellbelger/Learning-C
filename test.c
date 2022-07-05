#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//variaveis
int destino, origem, vertices = 0;
float custo;
float *custos = NULL;

//prototipacao
void dijkstra(int vertices, int origem, int destino, float *custo);
void menu_mostrar(void);
void grafo_procurar(void);
void grafo_criar(void);

// funcao principal
int main(int argc, char**argv) {
  int opt = -1;
  do {
    menu_mostrar();
    scanf("%d", &opt);
    switch(opt){
      case 1:
        grafo_criar();
        break;
      case 2:
        if(vertices < 0){
          grafo_procurar();
        }
      break;
    }
  }while(opt != 0);
  return 0;
}


//desenhar na tela o menu
void menu_mostrar(void) {
  
  printf("Implementacao do algoritmo de Dijasktra\n");
  printf("opcao:\n");
  printf("\t1 - Adicionar grafo\n");
  printf("\t2 - Menor rota\n");
  printf("\t3 - Sair\n");
}

void grafo_criar(void) {
  do {
    printf("\nInforme o numero de vertices: ");
    scanf("%d", &vertices);
  } while (vertices < 3);

  if (!custos) {
    free(custos);
  }
  custos = (float *) malloc(sizeof(float)*vertices*vertices);
  if (custos == NULL) {
    printf("Erro, memoria insuficiente.");
    exit(-1);
  }

  //preenchendo matriz com -1
  for (int i = 0; i <= vertices; i++){
    custos[i] = -1;
    // a funcao printf criou um array com 26 posicoes para 5 vertices, caso chamado de iteracao.
  }

  do {
    system("clear");
    printf("Entre com as arestas:\n");
    do {
      printf("Origem (entre 1 e %d ou '0' para sair)", vertices);
      scanf("%i", &origem);
    } while (origem < 0 || origem > vertices);
    if (origem){
      do {
        printf("Destino (entre 1 e %i, menos %i)", vertices, origem);
        scanf("%d", &destino);
      } while (destino < 1 || destino > vertices || destino == origem);
      do {
        
      }
    }
  }
}