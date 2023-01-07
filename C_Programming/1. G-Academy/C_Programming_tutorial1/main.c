#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    printf("----------------------------------- \n");
    printf("Introduction\n");
    printf("----------------------------------- \n");
    printf(" \n");
    printf("Hello world!\n");
    printf(" \n");
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");
    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Variables - 21.21\n");
    printf("----------------------------------- \n");
    printf(" \n");

    char characterName[] = "Shafiq";
    int characterAge = 32;
    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n",characterAge);

    characterAge = 21;
    printf("He was really liked the name %s\n",characterName);
    printf("but did not like being %d.\n", characterAge);

    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Data Types - 32.26\n");
    printf("----------------------------------- \n");
    printf(" \n");

    int age = 40;
    printf("Age = %d \n", age);

    double gpa = 3.6;
    printf("Marks = %0.1f \n",gpa);
    printf("Marks = %0.2f \n",gpa);
    printf("Marks = %0.3f \n",gpa);

    char grade = 'A';
    printf("Grade = %c \n", grade);

    char phrase[]  = "Shafiq Engineering";
    printf("Phrase = %s \n", phrase);


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Printf - 38.32\n");
    printf("----------------------------------- \n");
    printf(" \n");

    printf("Hello\nWorld\n");
    printf("Hello\"World\n");
    printf("%d\n", 500);
    printf("My favorite number is %d\n", 500);
    printf("My favorite %s is %d\n","number", 500);
    printf("My favorite %s is %f\n","number", 500.23128);

    int favNum = 90;
    char myChar = 'i';
    printf("My favorite %s is %d\n","number", favNum);
    printf("My favorite %c is %d\n",myChar, favNum);


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Working With Numbers - 45.23\n");
    printf("----------------------------------- \n");
    printf(" \n");

    printf("%f \n", 8.9);
    printf("%f \n", 5.0 + 5.4);
    printf("%d \n", 5 / 4);
    printf("%f \n", 5 / 4.0);

    int num = 6;
    printf("%d\n",num);
    printf("2 Power of 3 is %0.1f\n", pow(2, 3)); /* 2^3 */
    printf("4 Power of 3 is %0.1f\n", pow(4, 3)); /* 4^3 */
    printf("square root of 36 is %0.1f\n", sqrt(36)); /* square root of 36 */
    printf("Ceiling of 36.356 is %0.1f\n", ceil(36.356)); /* ceiling of 36.356 - round up*/
    printf("Floor of 36.356 is %0.1f\n", floor(36.356)); /* cfloor of 36.356 - round down*/

    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Comments - 52.21\n");
    printf("----------------------------------- \n");
    printf(" \n");

    /* this print out text*/
    printf("Comments are fun");



    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Constants - 56.02\n");
    printf("----------------------------------- \n");
    printf(" \n");

    const int FAV_NUM1 = 5;
    printf("%d\n", FAV_NUM1);
    printf(" \n");
    int num1 = 8;
    printf("%d\n", num1);

    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Getting User Input - 1.00.00\n");
    printf("----------------------------------- \n");
    printf(" \n");

    char nameStudent1[20];
    printf("Enter your name: ");
    fgets(nameStudent1, 20, stdin);
    printf("Your name is %s", nameStudent1);
    printf(" \n");
    printf(" \n");

    int ageInput;
    printf("Enter your age: ");
    scanf("%d", &ageInput);
    printf("You are %d years old", ageInput);
    printf(" \n");
    printf(" \n");

    double gpaInput;
    printf("Enter your gpa: ");
    scanf("%lf", &gpaInput);
    printf("Your gpa is %0.2f", gpaInput);
    printf(" \n");
    printf(" \n");

    /*
    char nameStudent[20];
    printf("Enter your name: ");
    scanf("%s", nameStudent);
    printf("Your name is %s", nameStudent);
    printf(" \n");
    printf(" \n");

    char grade1;
    printf("Enter your Grade: ");
    scanf("%c", &grade1);
    printf("Your grade is %c", grade1);
    printf(" \n");
    printf(" \n");

    */

    printf(" \n");
    printf(" \n");

    return 0;
}
