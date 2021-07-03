#include <stdio.h>
#include <time.h>

int main()
{
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int year = data->tm_year + 1900;
    int born;
    int age;

    printf("What year were you born? ");
    scanf("%i", &born);

    age = year - born;

    printf("Your age: %i\n", age);
}