#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Hello, world.\n");
    printf("Value in meters: ");
    scanf("%f", &x);

    y = x * 100;

    printf("%fm = %fcm", x, y);
    return 0;
}