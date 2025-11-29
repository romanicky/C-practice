#include <stdio.h>

int main()
{
    printf("Enter a number to compute its factorial: ");
    int n;
    scanf("%d", &n);
    while (n < 0)
    {
        printf("Invalid number. Please enter a non-negative integer: ");
        scanf("%d", &n);
    }

    unsigned long long factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is %llu\n", n, factorial);
    return 0;
}
