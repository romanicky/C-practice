#include <stdio.h>

int main()
{
    // write a C program to convert a number to year, week, day
    int input;
    printf("Please input a number:");
    scanf("%d", &input);
    int year = input / 365;
    int week = input % 365 / 7;
    int day = input % 365 % 7;
    printf("%d day is %d year, %d week and %d day", input, year, week, day);
    return 0;
}
