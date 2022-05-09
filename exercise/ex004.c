#include <stdio.h>
#include <string.h>

int main(){
    char name1[20], name2[20];
    char sex1, sex2;
    float note1, note2;

    printf("\nhello, world.\n");
    fflush(stdin);
    printf("\nFirst people.\n");
    printf("Name: ");
    scanf("%s", &name1);
    fflush(stdin);
    printf("Danger: ");
    scanf(" %c", &sex1);
    fflush(stdin);
    printf("Note: ");
    scanf("%f", &note1);
    printf("\nSecond people.\n");
    fflush(stdin);
    printf("Name: ");
    fflush(stdin);
    scanf("%s", name2);
    printf("Danger: ");
    scanf(" %c", &sex2);
    fflush(stdin);
    printf("Note: ");
    scanf("%f", &note2);

    printf("\n============================================\n");
    printf("Name \t\tDanger \t\tNote");
    printf("\n\n%s \t\t%c \t\t%.2f\n", name1, sex1, note1);
    printf("%s \t%c \t\t%.2f\n", name2, sex2, note2);
    printf("\n============================================\n");
    

    return 0;
}