#include <stdio.h>

int main()
{
    int v1, v2, r;
    printf("Type the first value: ");
    scanf("%i", &v1);
    printf("Type the second value: ");
    scanf("%i", &v2);
    printf("\n%i & %i = %i", v1, v2, v1 & v2);
    printf("\n%i | %i = %i", v1, v2, v1 | v2);
    printf("\n%i ^ %i = %i\n", v1, v2, v1 ^ v2);

    return 0;
}