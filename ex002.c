#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;
    printf("Hello, world.\n");
    printf("Day: ");
    scanf("%i", &day);
    printf("Month: ");
    scanf("%i", &month);
    printf("Year: ");
    scanf("%i", &year);
    printf("Your birth date is: %i/%i/%i", day, month, year);
}