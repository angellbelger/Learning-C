#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, world.\n");

    float grade1, grade2, average;

    printf("Grade 01: ");
    scanf("%f", &grade1);
    printf("Grade 02: ");
    scanf("%f", &grade2);

    average = (grade1 + grade2) / 2;
    
    printf("Average: %f", average);

}