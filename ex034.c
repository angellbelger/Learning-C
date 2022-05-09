#include <stdio.h>
#include <string.h>

int main()
{
    char name1[8];
    char name2[8];
    char sex1;
    char sex2;
    float note1;
    float note2;

    printf("\n\n----------------- List -----------------\n\n");
    printf("First people: ");
    scanf("%s", &name1);
    fflush(stdin);
    printf("\nSex: ");
    scanf("%c", &sex1);
    fflush(stdin);
    printf("\nNote: ");
    scanf("%f", &note1);
    fflush(stdin);
    printf("\nSecond people: ");
    scanf("%s", &name2);
    fflush(stdin);
    printf("\nSex: ");
    scanf("%c", &sex2);
    fflush(stdin);
    printf("\nNote: ");
    scanf("%f", &note2);
    fflush(stdin);
    printf("\n\n----------------- Learners -----------------\n\n");
    printf("%-10s %-5s %-10s", "Name", "Sex","Note\n");
    printf("%-10s %-5c %-10.2f", name1, sex1, note1);
    printf("%-10s %-5c %-10.2f", name2, sex2, note2);
    printf("\n");
    printf("\n--------------------------------------------\n\n");

    return 0;    
}