#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    int n_approved, n_disapproved;
    int howmany, code, i;
    float note, sum, mean;
    sum = note = mean = n_approved = n_disapproved = howmany = 0;

    do
    {
        printf("\nCode Learn: ");
        scanf("%i", &code);
        if ( code != 0)
        {
            printf("\nHow many notes: ");
            scanf("%i", &howmany);

            for( i=0; i<howmany; i++ )
            {
                printf("\nNote %i:", (i + 1) );
                scanf("%f", &note);

                sum = sum + note;
            }

            mean = sum / howmany;

            if ( mean >= 6 )
            {
                n_approved++;
            }
            else
            {
                n_disapproved++;
            }

            sum = mean = 0;
        }
    }
    while ( code != 0);

    printf("\nApproved: %i\nDisapproved: %i\n", n_approved, n_disapproved);

    return 0;
}