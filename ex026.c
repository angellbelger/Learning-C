#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    float salary, newSalary;
    salary = newSalary = 0;

    printf("\nYour salary: R$");
    scanf("%f", &salary);

    if ( salary <= 1250 )
        newSalary = salary * 1.15;
    else
        newSalary = salary * 1.10;
    
    printf("Your new salary: R$%.2f\n", newSalary);

    return 0;
}