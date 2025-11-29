#include <stdio.h>

int main()
{

    unsigned long long n;
    int count = 0;
    printf("Enter a number: ");
    scanf("%llu", &n);

    if (n == 0)
    {
        printf("Number of digits: 1\n");
        return 0;
    }

    while (n != 0)
    {
        n /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}
