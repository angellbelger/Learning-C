#include <stdio.h>
#include <stdlib.h>

#define LEN 3

struct stack_type{
  int data[LEN];
  int start;
  int top;
};

struct stack_type stack;

void push(int element){

  if (stack.top == LEN)
    printf("It is full.\n");

  else{
    stack.data[stack.top] = element;
    stack.top++;
  }
}

int pop(){

  int element;
  if (stack.top == stack.start){;
    printf("It is empty.\n");
  }
  else{
    stack.top--;
    element = stack.data[stack.top];
    return element;
  }
}