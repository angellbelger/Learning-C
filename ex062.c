#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int conteudo;
    struct no *left;
    struct no *right;
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
            insertRight(no->left, value);
    }

}

void insertRight(No *no, int value){
    if (no->right == NULL){
        No *novo = (No*) malloc(sizeof(No));
        novo->conteudo = value;
        novo->left = NULL;
        novo->right = NULL;
        no->right = novo;
    }
    else{
        if (value > no->right->conteudo)
            insertRight(no->right, value);
        else
            insertLeft(no->right, value);
    }

}

void insert(treeBinary *arv, int value){
    if (arv->raiz == NULL){
        No *novo = (No*) malloc(size of(No));
        novo->conteudo = value;
        novo->left = NULL;
        novo->right = NULL;
        arv->raiz = novo;
         
    }
    else{
        if (value < arv->raiz->conteudo)
            insertLeft(arv->raiz, value);
        else
            insertRight(arv->raiz, value);
    }
}

void imprimir(treeBinary *)

int main(){

}