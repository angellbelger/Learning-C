#include <stdio.h>
#include <locale.h>

int main()
{
    // Learning about string
    setlocale(LC_ALL, "Portuguese");

    printf("\nHello, world.\n");
    printf("\nLearners List");
    printf("\n-----------------------------");
    printf("\n%-17s %10s", "Name", "Note");
    printf("\n%-17s %10.2f", "Ana Beatriz", 8.5);
    printf("\n%-17s %10.2f", "Bianca Martins", 9.0);
    printf("\n%-17s %10.2f", "Claudio Sa", 5.5);
    printf("\n%-17s %10.2f\n\n", "Giovana Silva", 7.5);

    return 0;
}
