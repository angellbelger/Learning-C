#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    float valueHouse, salary, monthly;
    int year;

    printf("\nValue house in US$: ");
    scanf("%f", &valueHouse);
    printf("Your Salary in US$: ");
    scanf("%f", &salary);
    printf("In how many years will you pay: ");
    scanf("%i", &year);

    monthly = valueHouse / (year * 12);

    if ( monthly >= ( salary * 0.3 ) / 100 )
        printf("Your monthly stallment is %.2f\nApproved payment.\n\n", monthly);
    else
        printf("Your monthly stallment is %.2f\nDisapproved payment.\n\n", monthly);



    return 0;
}
