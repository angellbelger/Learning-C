#include <stdio.h>

int main()
{
    printf("\nHello, world.");

    float salary, new_salary;

    printf("\nYour salary: us$");
    scanf("%f", &salary);

    new_salary = salary * 1.15;

    printf("\nYour new salary: us%.2f", new_salary);

    return 0;
}