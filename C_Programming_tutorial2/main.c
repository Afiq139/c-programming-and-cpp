#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age){
printf("Hello %s, you are %d\n", name, age);
}

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

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[0]);
    printf("%d\n", luckyNumbers[3]);
    printf("%d\n", luckyNumbers[1]);
    printf("%d\n", luckyNumbers[2]);
    printf(" \n");

    int luckyNumbers1[10];
    luckyNumbers1[1] = 80;
    luckyNumbers1[0] = 90;
    printf("%d\n", luckyNumbers1[0]);


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Functions - 1.36.45\n");
    printf("----------------------------------- \n");
    printf(" \n");

    sayHi("Mike", 26);
    sayHi("Tom", 40);
    sayHi("Oscar", 17);


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Return Statement - 1.45.37\n");
    printf("----------------------------------- \n");
    printf(" \n");


    printf(" \n");
    printf(" \n");

    return 0;
}


