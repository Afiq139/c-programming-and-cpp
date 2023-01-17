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

    printf("\nWhat do you want to do?");
    printf("\n\n1. Register an Account");
    printf("\n2. Login to Account");



    return 0;
}
