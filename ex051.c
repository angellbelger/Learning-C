#include <stdio.h>
#include <time.h>

int main()
{
    printf("\nHello, world.\n");

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int currentHour = data->tm_hour;
    int timeMovie;
    float money;

    printf("\n-----------------\nCINEMA \n-----------------\nValor: R$20,00\n");

    printf("\nWhat time is it: %ih\n", currentHour);
    printf("Que horas comeca o filme: ");
    scanf("%i", &timeMovie);
    printf("Quantos reais voce possue: R$ ");
    scanf("%f", &money);

    if ( money >= 20 && currentHour <= timeMovie )
    {
        printf("Voce pode assistir o filme.\n");
    }
    else
    {
        printf("Lamentamos, voce nao pode assistir o filme.\n");
    }


    return 0;
}