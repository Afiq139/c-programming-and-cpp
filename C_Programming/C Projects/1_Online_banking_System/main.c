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
    char filename[50],phone[50], pword[50];
    int opt, choice;
    char cont = 'y';
    float amount;

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
        fclose(fp);
    }

    if(opt == 2){
        system("cls");
        printf("\nPhone number:\t");
        scanf("%s", phone);
        printf("password:\t");
        scanf("%s",pword);
        strcpy(filename,phone);
        fp = fopen(strcat(filename, ".dat"),"r");
        if(fp == NULL){
            printf("\nAccount number not registered");
        }
        else{

        fread(&usr, sizeof(struct user), 1, fp);
        fclose(fp);
        if(!strcmp(pword,usr.password)){
                while(cont == 'y'){
                    system("cls");
                    printf("\nPress 1 for balance inquiry");
                    printf("\nPress 2 for deposit an amount");
                    printf("\nPress 3 for cash withdrawal");
                    printf("\nPress 4 for online transfer");
                    printf("\nPress 5 for password change");
                    printf("\n\nYour choice:\t");
                    scanf("%d", &choice);

                    switch(choice){
                        case 1:
                           printf("\nYour current balance is RM %.2f", usr.balance);
                           break;
                        case 2:
                           printf("\nEnter the amount:\t");
                           scanf("%f", &amount);
                           usr.balance +=amount;
                           fp = fopen(filename, "w");
                           fwrite(&usr, sizeof(struct user), 1, fp);
                           if(fwrite != NULL)printf("\nSuccessfully deposited.");
                           fclose(fp);
                           break;
                        case 3:
                           printf("\nEnter the amount:\t");
                           scanf("%f", &amount);
                           usr.balance -=amount;
                           fp = fopen(filename, "w");
                           fwrite(&usr, sizeof(struct user), 1, fp);
                           if(fwrite != NULL)printf("\nYou have withdrawn RM %.2f", amount);
                           fclose(fp);
                           break;





                    }

                    printf("\nDo you want to continue the transaction [y/n]\t");
                    scanf("%s", &cont);
                }

            //printf("\nPassword matched");
        }
        else{
            printf("\nInvalid password"); //15.29
        }
      }
    }





    return 0;
}
