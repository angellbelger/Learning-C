#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int conteudo;
    struct no *left, *right;
}No;

typedef struct{
    No *raiz;
}treeBinary;

void insertLeft(No *no, int value){
    if (no->left == NULL){
        No *novo = (No*) malloc(sizeof(No));
        novo->conteudo = value;
        novo->left = NULL;
        novo->right = NULL;
        no->left = novo;
    }
    else{
        if (value < no->left->conteudo){
            insertLeft(no->left, value);
        }
        else 
            inserirDireita(no->left, value);
    }

}

void inserirDireita(No *no, int value){
    if (no->right == NULL){
        No *novo = (No*) malloc(sizeof(No));
        novo->conteudo = value;
        novo->left = NULL;
        novo->right = NULL;
        no->right = novo;
    }
    else{
        if (value > no->right->conteudo)
            inserirDireita(no->right, value);
        else
            insertLeft(no->right, value);
    }

}

void insert(treeBinary *arv, int value){
    if (arv->raiz == NULL){
        No *novo = (No*) malloc(sizeof(No));
        novo->conteudo = value;
        novo->left = NULL;
        novo->right = NULL;
        arv->raiz = novo;
         
    }
    else{
        if (value < arv->raiz->conteudo)
            insertLeft(arv->raiz, value);
        else
            inserirDireita(arv->raiz, value);
    }
}

void press(No *raiz){
    if (raiz != NULL){
        printf("%d", raiz->conteudo);
        printf("%d", raiz->left);
        printf("%d", raiz->right);
    }
}

int main(){
    int option, value;
    treeBinary arv;
    arv.raiz = NULL;

    do
    {
        printf("\n0 - Sair\n1 - Insert\n2 - Print\n");
        scanf("%d", &option);
        switch (option)
        {
        case 0:
            printf("\nExiting...\n");
            break;
        case 1:
            printf("\nType a value to Binary Tree:\n");
            scanf("%d", &value);
            insert(&arv, value);
            break;
        case 2:
        printf("\nTree Binary\n");
            press(arv.raiz);
            break;
        default:
            printf("\nInvalid option\n");
        }
    } while (option != 0);
    

}