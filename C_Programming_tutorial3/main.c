#include <stdio.h>
#include <stdlib.h>

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
    return 0;
}
