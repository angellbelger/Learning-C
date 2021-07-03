#include <stdio.h>
#include <time.h>

int main()
{
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int currentYear = data->tm_year + 1900;
    int year;
    int age;

    printf("---------------\nMilitary Servise\n---------------\n");
    printf("\nCurrent year: %i", currentYear);
    printf("\nWhat year were you born? ");
    scanf("%i", &year);

    age = currentYear - year;
    
    if ( age >= 18 )
        printf("Your age is %i, we hope you are up to date with your obligations.\n", age);
    else
    {
        printf("Your age is under 18y old. Your time is coming.\n");
    }
}