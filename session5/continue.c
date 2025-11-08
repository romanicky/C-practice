#include <stdio.h>

int main()
{
    int number, sum = 0, count = 0;
    printf("Enter 4 positive numbers, ONE PER LINE:\n");
    while (count < 4)
    {
        scanf("%d", &number);
        if (number < 0)
        {
            printf("ERROR: negative number (or zero) entered!\n");
            continue;
        }
        sum += number;
        count++;
    }
    printf("%d is the sum of the %d numbers \n", sum, count);
    return 0;
}