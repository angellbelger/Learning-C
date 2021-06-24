#include <stdio.h>
#include <string.h>

int main()
{
    printf("\nHello, world.\n");

    float n1, n2, average;
    char result[12];

    printf("First note: ");
    scanf("%f", &n1);
    fflush(stdin);
    printf("Second note: ");
    scanf("%f", &n2);
    fflush(stdin);
    average = ( n1 + n2 ) / 2;
    strcpy(result, (average >= 7)?"Approved":"Disapproved");
    printf("Average: %.2f\nResult: %s\n", average, result);


    return 0;
}