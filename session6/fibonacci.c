#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int i, terms = 7;
    printf("Fibonacci Series:\n");
    for (i = 0; i < terms; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
