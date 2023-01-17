#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Online Banking System

//define user
struct user{
    char phone[50];
    char ac[50];  //account
    char password[50];
    float balance;

};
int main()
{
    struct user usr;
    int opt;

    printf("\nWhat do you want to do?");
    printf("\n\n1. Register an Account");
    printf("\n2. Login to an Account");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);

    if(opt == 1){
        system("cls"); //clear in linux or mac
        printf("Enter your account no:\t");
        scanf("%s", usr.ac);
        printf("\nEnter your phone no:\t");
        scanf("%s", usr.phone);
        printf("\nEnter your new password:\t");
        scanf("%s", usr.password);
        usr.balance = 0;
    }



    return 0;
}
