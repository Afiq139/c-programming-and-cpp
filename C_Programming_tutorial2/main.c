#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("----------------------------------- \n");
    printf("Building a Basic Calculator - 1.12.00\n");
    printf("----------------------------------- \n");
    printf(" \n");

    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %0.2f", num1 + num2);


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Building a Mad Libs Game - 1.17.42\n");
    printf("----------------------------------- \n");
    printf(" \n");

    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural-noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);

    printf(" \n");
    printf("Roses are %s\n", color);
    printf(" \n");
    printf("%s are blue\n", pluralNoun);
    printf(" \n");
    printf("I love %s %s\n", celebrityF, celebrityL);


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("arrays - 1.26.31\n");
    printf("----------------------------------- \n");
    printf(" \n");



    printf(" \n");
    printf(" \n");

    return 0;
}
