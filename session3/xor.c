#include <stdio.h>

int main()
{
    // Write a C program to toggle the 2nd and 4th bits from left to right using XOR and print the new value :
    // Input a number
    int num;
    printf("Please input a number: ");
    scanf("%d", &num);
    num ^= (1 << 1); // Toggle 2nd bit
    num ^= (1 << 3); // Toggle 4th bit
    printf("New value: %d\n", num);
    return 0;
}