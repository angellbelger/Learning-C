#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Hello, world.\n");
    printf("Type a number: ");
    scanf("%i", &x);
    printf("Type a second number: ");
    scanf("%i", &y);
    int sum;
    sum = x + y;
    printf("%i + %i = %i", x, y, sum);
    return 0;
}
