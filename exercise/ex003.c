#include <stdio.h>

int main(){
    char name[20];
    int age;
    float weight;


    printf("\nWhat is your name? ");
    scanf("%s", &name);
    printf("\nHow old you are? ");
    scanf("%i", &age);
    printf("\nHow much do you weight? ");
    scanf("%f", &weight);
    printf("\nYour name is %s, you are %i years old, and you weight %fkg\n", name, age, weight);
}