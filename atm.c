#include <stdio.h>
#include <stdlib.h>

void printinvoice(char*transactiontype,int amount,int balance)
    {
        printf("\n --Transaction invoice--\n");
        printf("transaction:%s\n",transactiontype);
        printf("Amount:%d\n",amount);
        printf("Balance:%d\n",balance);
    }
 int main()
 {
     int balance=10000;
     int choice,amount,pin,enterpin;

     pin=1234;

     printf("welcome to ATM service\n");
     printf("please insert your card\n");

     printf("Enter your pin:\n");
     scanf("%d",&enterpin);
     if (enterpin != pin)
     {
         printf("invalid pin -------card exiting-------\n");
         exit (0);

     }

    while(1)
    {
        printf("\nATM menu:\n");
        printf("1: Withdraw\n");
        printf("2: Deposit\n");
        printf("3: Check balance\n");
        printf("4: Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter amount to withdraw:");
            scanf("%d",&amount);
            if (amount >balance)
            {
                printf("insufficient balance!\n");

            }
            else
            {
                balance -= amount;
                printf("Withdrawal successful!\n");
                printinvoice("withdrawal",amount,balance);
            }
                break;

        case 2:
            printf("Enter amount to deposit:");
            scanf("%d",&amount);
            balance+=amount;
            printf("Amount deposited successful!\n");
            printinvoice("Deposit",amount,balance);
            break;

        case 3:
            printf("Your account balance is:%d\n",balance);
            printinvoice("Balance inquiry",0,balance);
            break;

        case 4:
            printf("Thank you for using our ATM service!\n");
            exit(0);
        default:
            printf("invalid choice! Please try again.\n");
            break;



    }


    }
    return 0;
 }


