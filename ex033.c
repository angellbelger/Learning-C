#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char name[] = "";
    int age;
    float weight;

    printf("\nHello, world.\n");
    printf("What's your name: ");
    fflush(stdin);
    gets(name);
    printf("How old are you: ");
    fflush(stdin);
    scanf("%i", &age);
    printf("Your weight: ");
    fflush(stdin);
    scanf("%f", &weight);
    printf("------------------------");
    printf("\nYour name is %s and you are %i years old, and your weight is: %.2f\n\n", name, age, weight);

    return 0;
}