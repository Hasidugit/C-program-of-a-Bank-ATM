#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to the ABC bank\n");
    printf("Select one of the options from following list and enter the number\n");
    printf("1. Deposit \t 2.Withdraw  \t Check Balance \n");

    int choice;

    printf("your chioce:");
    scanf("%d",&choice);

    int deposit;
    int Withdraw;
    int balance= 40000;
    //deposit
    if (choice== 1){
        printf("Enter the amount to deposit:");
        scanf("%d",&deposit);
        balance+=deposit;
        printf("Your balance :%d",balance);

    }
    //withdraw
    else if(choice==2){
        printf("Enter the amount to withdraw:");
        scanf("%d",&Withdraw);
        if (Withdraw > balance){
            printf("your balance is insufficient to withdraw that amount of money \n");
        }
        else{
            balance-=Withdraw;
        }
        printf("Your balance :%d\n",balance);


    }
    //balance
    else if(choice==3){
        printf("Your balance is :%d\n",balance);


    }


    return 0;

}
