#include <stdio.h>
#include <string.h>

int main()
{
    printf("\nHello, world.\n");

    float x, y, result;
    int op;

    printf("\nType a number: ");
    scanf("%f", &x);
    printf("Type a second number: ");
    scanf("%f", &y);
    printf("\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division");
    printf("\nOption: ");
    scanf("%i", &op);

    switch(op)
    {
        case 1:
            result = x + y;
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

    printf("Result: %.2f\n", result);

    return 0;
}