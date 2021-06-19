#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");
    printf("\n-------------- Scape --------------\n");
    printf("%-10s %-10c %s\n", "\\a", '=', "Beep");
    printf("%-10s %-10c %s\n", "\\n", '=', "New line");
    printf("%-10s %-10c %s\n", "\\t", '=', "Tab");
    printf("%-10s %-10c %s\n", "\\", '=', "Bar");
    printf("%-10s %-10c %s\n", "%%", '=', "Percentage");
    printf("%-10s %-10c %s\n", "\\?", '=', "Interrogation");
    printf("-----------------------------------\n");

    return 0;
}