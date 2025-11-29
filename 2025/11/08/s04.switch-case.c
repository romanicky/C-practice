// write a program to calculate using switch case
#include <stdio.h>

int main()
{
    printf("Enter two numbers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    char operator;
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        else
            printf("Error: Division by zero is not allowed.\n");
        break;
    default:
        printf("Error: Invalid operator.\n");
    }
    return 0;
}
