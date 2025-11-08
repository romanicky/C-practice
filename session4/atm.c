// Write a programe to simulate a simple ATM interface using switch case
#include <stdio.h>

int main()
{
    int balance = 5000;

    int choice = 0;

    /* Loop until user chooses 4 (Exit) */
    do
    {
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            /* Invalid input: clear stdin and continue */
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
                ;
            printf("Invalid input. Please enter a number between 1 and 4.\n\n");
            choice = 0; /* ensure we don't exit */
            continue;
        }

        switch (choice)
        {
        case 1:
            printf("Your balance is: $%d\n\n", balance);
            break;
        case 2:
        {
            printf("Enter amount to withdraw: ");
            int withdraw;
            if (scanf("%d", &withdraw) != 1)
            {
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF)
                    ;
                printf("Invalid amount. Returning to menu.\n\n");
                break;
            }
            if (withdraw > balance)
            {
                printf("Insufficient balance!\n\n");
            }
            else
            {
                balance -= withdraw;
                printf("Please collect your cash. New balance is: %d\n\n", balance);
            }
            break;
        }
        case 3:
        {
            printf("Enter amount to deposit: ");
            int deposit;
            if (scanf("%d", &deposit) != 1)
            {
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF)
                    ;
                printf("Invalid amount. Returning to menu.\n\n");
                break;
            }
            balance += deposit;
            printf("Amount deposited successfully. New balance is: %d\n\n", balance);
            break;
        }
        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n\n");
        }

    } while (choice != 4);

    return 0;
}

// homework session4
// Find the smallest number using tenary operator
// Find the largest of 4 number using ternary operator
