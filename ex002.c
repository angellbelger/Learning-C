#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;
    printf("Hello, world.");
    printf("Day: \n");
    scanf("%i", &day);
    printf("Month: \n");
    scanf("i", &month);
    printf("Year: \n");
    scanf("%i", &year);
    printf("Your birth date is: %i/%i/%i", day, month, year);
}