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
    printf("----------------------------------- \n");
    printf("While Loops - 2:29:45\n");
    printf("----------------------------------- \n");
    printf(" \n");

    int index = 1;
    while(index <= 5){
        printf("%d \n", index);
        index++;
    }

    do{
        printf("%d \n", index);
        index++;
    }while(index <= 7);


    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("Building a Guessing Game - 2:37:49\n");
    printf("----------------------------------- \n");
    printf(" \n");

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        }else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
        printf("Out of guessses");
    }else {
        printf("You Win!");
    }



    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("For Loops - 2:50:12\n");
    printf("----------------------------------- \n");
    printf(" \n");

    int x;
    for(x = 1; x <= 5; x++){
        printf("%d \n", x);
    }
    printf(" \n");

    int luckyNumber[] = {4, 8, 15, 16, 23, 42};
    int y;
    for(y = 0; y < 6; y++){
        printf("%d \n", luckyNumber[y]);
    }




    printf(" \n");
    printf(" \n");
    printf("----------------------------------- \n");
    printf("2D Arrays & Nested Loops - 2:59:04\n");
    printf("----------------------------------- \n");
    printf(" \n");

    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
        };
        /* nums [0][0] = 1  also can */
    printf("%d", nums[1][1]);

    int i, j;
    for(i = 0; i < 3; i++){
        for(j=0; j< 2; j++){
            printf("%d,", nums[i][j]);
        }
        printf("\n"); /* i,j = 0 -> will go to index of 0 */
    }


    printf(" \n");
    printf(" \n");
    return 0;
}
