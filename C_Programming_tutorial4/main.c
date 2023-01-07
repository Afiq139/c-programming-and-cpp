#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------------------------------- \n");
    printf("Memory Addresses - 3:09:09\n");
    printf("----------------------------------- \n");
    printf(" \n");

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("Age: %p\nGpa: %p\nGrade: %p", &age, &gpa, &grade);
    /* accessing physical memory address */

    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Pointers - 3:17:21\n");
    printf("----------------------------------- \n");
    printf(" \n");

    int ages = 30;
    /* int * pAges = &ages; */
    /* double gpas = 3.4; */
    /* double * pGpas = &gpas; */
    /* char grades = 'A'; */
    /* char * pGrades = &grades; */

    printf("age's memory address: %p\n", &ages);
    /* pointer is just a data type of memory address. can make pointer variables */


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Dereferencing Pointers - 3:27:42\n");
    printf("----------------------------------- \n");
    printf(" \n");

    int agess = 30;
    int *pAgess = &agess;

    printf("%d \n", *pAgess);
    printf("%d \n", *&agess);
    printf("%p \n", &agess);
    printf("%d \n", *&*&agess);

    /*  *-> deference address, & -> reference address */


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Writing Files - 3:32:38\n");
    printf("----------------------------------- \n");
    printf(" \n");



    printf(" \n");
    printf(" \n");
    return 0;
}
