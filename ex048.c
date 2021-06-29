#include <stdio.h>
#include <stdlib.h>


struct book
{
    int code;
    char name[30];
    float value;
};


int main()
{
    struct book library[2];

    int i;

    for ( i=0; i<2; i++)
    {
        printf("\n-------------------------------\n");
        printf("Code: ");
        fflush(stdin);
        scanf("%i", &library[i].code);
        printf("Name: ");
        fflush(stdin);
        gets(library[i].name);
        printf("Value in R$");
        scanf("%f", &library[i].value);
    }
    printf("\n-----------------------------------------\n");
    printf("Library");
    printf("\n-----------------------------------------\n");
    for (i=0; i<2; i++)
    {
        printf("\nCode: %i", library[i].code);
        printf("\nName: %s", library[i].name);
        printf("\nValue: R$%.2f", library[i].value);
        printf("\n\n-------------------------------\n");
    }

    return 0;
}