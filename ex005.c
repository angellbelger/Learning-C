#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, world.\n");
    int x;
    printf("Type a number: ");
    scanf("%i" ,&x);
    int y;
    y = x + 1;
    printf("The successor to %i is %i", x, y);
    return 0;

}