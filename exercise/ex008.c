#include <stdio.h>

int main(){
    char letter, before, after;

    printf("\nHello, world.\n");
    printf("Type a letter: ");
    scanf("%c", &letter);
    before = letter - 1;
    after = letter + 1;
    printf("Your letter is %c, before this letter is %c, and after your letter is %c\n", letter, before, after);
}