#include <stdio.h>

int main()
{
    int option, vote;
    float vote_lula, vote_bolso, vote_amoedo;
    vote_amoedo = vote_bolso = vote_lula = 0;
    
    printf("\nHello, world.\n");

    do
    {

        printf("\n\n---------- Voting ----------\n\n");
        printf("\n1 - Vote\n2 - Polling\n3 - Exit");
        printf("\nOption: ");
        scanf("%i", &option);

        switch (option)
        {
        case 1:
            printf("\nTo President\n");
            printf("\n13 - Lula\n17 - Bolsonaro\n30 - Amoedo\n");
            printf("\nVote: ");
            scanf("%i", &vote);
            
            switch (vote)
            {
            case 13:
                vote_lula++;
                break;
            
            case 17:
                vote_bolso++;
                break;
            
            case 30:
                vote_amoedo++;
                break;

            default:
            printf("\nInvalid Vote.\n");
                break;
            }
        
        case 2:
            printf("\n---------- Polling ----------\n");
            printf("\nResult:\n");
            printf("\nLula: %.2f%%", ( (vote_lula / (vote_amoedo + vote_bolso + vote_lula)) * 100 ));
            printf("\nBolsonaro: %.2f%%", ( (vote_bolso / (vote_amoedo + vote_bolso + vote_lula)) * 100 ));
            printf("\nAmoedo: %.2f%%", ( (vote_amoedo / (vote_amoedo + vote_bolso + vote_lula)) * 100 ));

            break;
        
        case 3:
            break;

        default:
            printf("\nInvalid Command/");
            break;
        }

    } while ( option != 3 );

    return 0;
}