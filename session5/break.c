#include <stdio.h>
#include <math.h>

int main()
{
    while (1)
    {
        printf("Input a number: ");
        int n;
        scanf("%d", &n);

        if (n == 0)
            return 0;

        int isPrime = 1; // assume n is prime
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                printf("%d is not a prime number.\n", n);
                isPrime = 0; // n is not prime
                break;       // exit the loop early
            }
        }
        if (isPrime)
        {
            printf("%d is a prime number.\n", n);
        }
    }
}