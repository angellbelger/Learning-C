#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");
    
    char a;
    char b;
    char name[20];

    printf("Your name: ");
    gets(name);
    printf("Type a letter: ");
    fflush(stdin);
    scanf("%c", &a);
    printf("Type a second letter: ");
    fflush(stdin);
    scanf("%c", &b);
    printf("%s, You typed a letter \"%c\" and \"%c\"\n", name, a, b);

    return 0;
}