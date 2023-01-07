#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    printf("----------------------------------- \n");
    printf("Building a Better Calculator - 2:07:10\n");
    printf("----------------------------------- \n");
    printf(" \n");

    double numx1;
    double numx2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &numx1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &numx2);

    if(op == '+'){
        printf("%0.1f", numx1 + numx2);
    }else if (op == '-'){
        printf("%0.1f", numx1 - numx2);
    }else if (op == '/'){
        printf("%0.1f", numx1 / numx2);
    }else if (op == '*'){
        printf("%0.1f", numx1 * numx2);
    }else{
        printf("Invalid Operator");
    }

    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Switch Statements - 2:14:53\n");
    printf("----------------------------------- \n");
    printf(" \n");

    char grade = 'r';

    switch(grade){
    case 'A':
        printf("You did great! ");
        break;
    case 'B':
        printf("You did alright! ");
        break;
    case 'C':
        printf("You did poorly! ");
        break;
    case 'D':
        printf("You did very bad. ");
        break;
    case 'E':
        printf("You didn't study well. ");
        break;
    case 'F':
        printf("You Failed! ");
        break;
    default :
        printf("Invalid Grade!");
    }


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Structs - 2:21:26\n");
    printf("----------------------------------- \n");
    printf(" \n");

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "jim");
    strcpy( student1.major, "Business");

    struct Student student2;
    student2.age = 22;
    student2.gpa = 3.2;
    strcpy( student2.name, "Pam");
    strcpy( student2.major, "Art");

    printf("%s \n", student1.name);
    printf("%s \n", student2.name);



    printf(" \n");
    printf(" \n");
    return 0;
}