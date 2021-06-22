#include <stdio.h>

int main()
{
    char name[20];
    float n1, n2, average;

    printf("\nName: ");
    gets(name);
    printf("First note: ");
    scanf("%f", &n1);
    printf("Second note: ");
    scanf("%f", &n2);

    average = ( n1 + n2 ) / 2;

    printf("\n\n%s\nAverage: %.2f\n", name, average);

    return 0;

}