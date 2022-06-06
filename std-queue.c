#include <stdio.h>
#include <stdlib.h>

#define LEN 3

struct queue_type{
    int data[LEN];
    int start;
    int final;
};

struct queue_type queue;

void push_back(int element){

    if (queue.final == LEN){
        printf("It is full.\n");

    }else{
        queue.data[queue.final] = element;
        queue.final++;
    }
}

int pop(){
    int element;
    if (queue.final == queue.start){
        printf("It is empty.\n");

    }else{
        element = queue.data[queue.start];
        for (int i = 0; i < LEN; i++)
            queue.data[i] = queue.data[i+1];
        queue.data[queue.final] = 0;
        queue.final--;
        return element;
    }
}

int main(){
    printf("hello, world.\n");

    return 0;
}