#include <stdio.h>

int main()
{
    int option, vote, vote2;
    option = 0;
    float vote_joao, vote_maria, vote_ze, vote_zureta, vote_gomes;
    vote_joao = vote_maria = vote_ze = vote_zureta = vote_gomes = 0;
    
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
                printf("\nTo city councilor.\n");
                printf("\n111 - Joao do Frete\n222 - Maria da Pamonha\n333 - Ze da Farmacia\n444 - Voto nulo");
                printf("\nVote: ");
                scanf("%i", &vote);
                
                switch (vote)
                {
                    case 111:
                        printf("\ncomputed vote.");
                        vote_joao++;
                        break;
                    
                    case 222:
                        printf("\ncomputed vote.");
                        vote_maria++;
                        break;
                    
                    case 333:
                    printf("\ncomputed vote.");
                        vote_ze++;
                        break;

                    case 444:
                        printf("\nVote void.");

                    default:
                        printf("\nInvalid Vote.\n");
                        printf("\nVote void.");
                        break;
                }

                printf("\nTo Mayor.\n");
                printf("\n11 - Dr. Zureta\n22 - Sr. Gomes\n44 - Voto nulo");
                printf("\nVote: ");
                scanf("%i", &vote2);

                switch (vote2)
                {
                    case 11:
                        vote_zureta++;
                        break;
                    case 22:
                        vote_gomes++;
                        break;
                    case 44:
                        printf("\nInvalid Vote.\n");
                        printf("\nVote void.");
                        break;
                    default:
                        printf("\nInvalid Vote.\n");
                        printf("\nVote void.");
                        break;
            }
            
            case 2:
                printf("\n---------- Polling ----------\n");
                printf("\nResult:\n");
                printf("\nJoao do Frete: %.2f%%", ( ( vote_joao / ( vote_joao + vote_maria + vote_ze )) * 100 ));
                printf("\nMaria da Pamonha: %.2f%%", ( ( vote_maria / ( vote_joao + vote_maria + vote_ze )) * 100 ));
                printf("\nZe da Farmacia: %.2f%%", ( ( vote_ze / ( vote_joao + vote_maria + vote_ze )) * 100 ));
                printf("\n\n-----------------------------\n\n");
                printf("\nDr. Zureta: %.2f%%", ( ( vote_zureta / ( vote_zureta + vote_gomes )) * 100 ));
                printf("\nSr. Gomes: %.2f%%", ( (vote_gomes / ( vote_zureta + vote_gomes )) * 100 ));
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