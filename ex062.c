#include <stdio.h>
#include <stdlib.h>

// struct

struct str_no{
    char data;
    int lefty;
    int right;
    int father;
};

// Consta and Var

#define LENGTH 100

struct str_no tree[LENGTH];
int index = 0;

// search
int search_tree(char data) {
    
