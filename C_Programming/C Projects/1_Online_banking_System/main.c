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
    FILE *fp;
    char filename[50];
    int opt;

    printf("\nWhat do you want to do?");
    printf("\n\n1. Register an Account");
    printf("\n2. Login to an Account");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);

    if(opt == 1){
        system("cls"); //clear in linux or mac
        printf("Enter your account number:\t");
        scanf("%s", usr.ac);
        printf("Enter your phone number:\t");
        scanf("%s", usr.phone);
        printf("Enter your new password:\t");
        scanf("%s", usr.password);
        usr.balance = 0;
        strcpy(filename,usr.phone);
        fp = fopen(strcat(filename,".dat"),"w");
        fwrite(&usr, sizeof(struct user), 1, fp);
        if(fwrite != 0){
            printf("\n\nAccount successfully registered");
        }else{
            printf("\n\nSomething went wrong please try again");
        }
    }



    return 0;
}
