#include <stdio.h>
#include <string.h>

int main(){
    char learner[20];
    float n1, n2, average;

    printf(">>>>>>>>>>>> Average <<<<<<<<<<<<\n");
    printf("\nLearner: ");
    scanf("%s", &learner);
    printf("\nNote 1: ");
    scanf("%f", &n1);
    printf("\nNote 2: ");
    scanf("%f", &n2);
    average = (n1 + n2) / 2;
    printf("\nLearner: %s\nAverage: %.2f\n", learner, average);

    return 0;
}