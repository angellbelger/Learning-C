#include <stdio.h>
#include <string.h>

int main()
{
    printf("\nHello, world.\n");

    float x, y, result;
    char operator;
    int op;

    printf("\nType a number: ");
    scanf("%f", &x);
    printf("Type a second number: ");
    scanf("%f", &y);
    printf("\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division");
    printf("Option: ");
    scanf("%i", &op);

    switch(op)
    {
        case 1:
            result = x + y;
            strcpy( &operator, "+");
            break;
        case 2:
            result = x - y;
            break;
        case 3:
            result = x * y;
            break;
        case 4:
            result = x / y;
            break;
        default:
            printf("Invalid command.");
            break;
    }

    printf("%.2f %c %.2f: %.2f", x, operator, y, result);

    return 0;
}