#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\nOlá mundo.\n");
    printf("\nEm português.\n");


    return 0;
}