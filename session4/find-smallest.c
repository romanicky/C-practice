// Find the smallest of three numbers using ternary operator
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int smallest = (num1 < num2 && num1 < num3) ? num1 : (num2 < num3) ? num2
                                                                       : num3;
    printf("The smallest number is: %d\n", smallest);
    return 0;
}