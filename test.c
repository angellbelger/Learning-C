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

// main function
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
        if(vertices > 0){
          grafo_procurar();
        }
      break;
    }
  }while(opt != 0);
  return 0;
}


//show menu
void menu_mostrar(void) {
  
  printf("Implementacao do algoritmo de Dijasktra\n");
  printf("opcao:\n");
  printf("\t1 - Adicionar grafo\n");
  printf("\t2 - Menor rota\n");
  printf("\t3 - Sair\n");
}

void grafo_criar(void) {
  do {
    printf("\nNumero de vertices: ");
    scanf("%d", &vertices);
  } while (vertices < 3);

  if (!custos) {
    free(custos);
  }
  custos = (float *) malloc(sizeof(float)*vertices*vertices);
  if (custos == NULL) {
    printf("Memoria insuficiente.");
    exit(-1);
  }

  //preenchendo matriz com -1
  for (int i = 0; i <= vertices * vertices; i++){
    custos[i] = -1;
    // a funcao printf criou um array com 26 posicoes para 5 vertices, caso chamado de iteracao.
  }

  do {
    system("clear");
    printf("Entre com as arestas:\n");
    do {
      printf("Origem (entre 1 e %d ou '0' para sair): ", vertices);
      scanf("%i", &origem);
    } while (origem < 0 || origem > vertices);
    if (origem){
      do {
        printf("Destino (entre 1 e %i, menos %i): ", vertices, origem);
        scanf("%d", &destino);
      } while (destino < 1 || destino > vertices || destino == origem);
      do {
        printf("Custo (positivo) do vertice %i para o vertice %i: ", origem, destino);
        scanf("%f", &custo);
      } while (custo < 0);
      custos[(origem-1) * vertices + destino - 1] = custo;
    }
  } while (origem);
}

void grafo_procurar(void) {
  int i, j;
  system("clear");
  printf("Lista de menores rotas no grafo: \n");
  for (i = 1; i <= vertices; i++) {
    for (j = 1; j <= vertices; j++) {
      dijkstra(vertices, i, j, custos);
    }
  }
}

void dijkstra(int vertices, int origem, int destino, float *custos) {
  int i, v, cont = 0;
  int *ant, *tmp;
  int *z; // vertices para caminhos minimos
  double min;
  double dist[vertices]; //vetor com os custos dos caminhos

  //aloca as linhas da matriz
  ant = (int *) calloc(vertices, sizeof(int *));
  if (ant == NULL) {
    printf("Memoria insuficiente.");
    exit(-1);
  }
  tmp = (int *) calloc(vertices, sizeof(int *));
  if (tmp == NULL) {
    printf("Memoria insuficiente.");
    exit(-1);
  }
  z = (int *) calloc(vertices, sizeof(int *));
  if (z == NULL) {
    printf("Memoria insuficiente.");
    exit(-1);
  }

  for (i = 0; i < vertices; i++) {
    if (custos[(origem - 1) * vertices + i] != -1) {
      ant[i] = origem - 1;
      dist[i] = custos[(origem - 1) * vertices + i];
    }else {
      ant[i] = -1;
      dist[i] = HUGE_VAL;
    }
    z[i] = 0;
  }

  z[origem-1] = 1;
  dist[origem-1] = 0;

  //main loop
  do {
    min = HUGE_VAL;
    for (i = 0;i < vertices;i++){
      if (!z[i]){
        if (dist[i] >= 0 && dist[i] < min){
          min = dist[i]; v = i;
        }
      }
    }
    //calculando a distancia dos novos vizinhos
    if (min != HUGE_VAL && v != destino - 1){
      z[v] = 1;
      for (i = 0;i < vertices;i++){
        if (!z[i]){
          if (custos[v*vertices+i] != -1 && dist[v] + custos[v*vertices+i] < dist[i]){
            dist[i] = dist[v] + custos[v*vertices+i];
            ant[i] = v;
          }
        }
      }
    }
  } while (v != destino -1 && min != HUGE_VAL);

  //show result
  printf("\tDe %d para %d: \t", origem, destino);
  if (min == HUGE_VAL){
    printf("Inexistente.\n");
    printf("\tCusto \t- \n");
  }else {
    i = destino;
    i = ant[i-1];
    while (i != -1){
      tmp[cont] = i + 1;
      cont++;
      i = ant[i];
    }
    for (i = cont; i > 0;i--){
      printf("%d -> ", tmp[i - 1]);
    }
    printf("%d", destino);
    printf("\n\tCusto: %.3lf\n", dist[destino-1]);
  }
}