#include <stdio.h>

int getNumber()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int main()
{
    printf("Hello, welcome to session 6 demo!\n");
    int number = getNumber();
    printf("You entered: %d\n", number);
    return 0;
}