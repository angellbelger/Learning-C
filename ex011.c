#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nHello, world.");

    float height, width, area, paint;

    printf("\nWall height:");
    scanf("%f", &height);
    printf("Wall Width: ");
    scanf("%f", &width);

    area = height * width;

    printf("Wall area: %fm2", area);

    paint = area / 2;

    printf("\nYou need %fl to paint the whole wall.", paint);

    return 0;

}