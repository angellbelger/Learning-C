#include <stdio.h>

int main()
{
    char letter;

    printf("\nType a letter: ");
    scanf("%c", &letter);
    printf("Predecessor of %c is %c\nSuccessor of %c is %c\n\n", letter, (letter - 1), letter, (letter + 1));
    printf("Code ASCII: %i\n", letter);

    return 0;

}