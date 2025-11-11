#include <stdio.h>

void changeValue(int *num)
{
    *num += 10; // Change the value of num
    printf("Inside function: %d\n", *num);
}
int main()
{
    int num = 10;
    printf("Before: %d\n", num);
    changeValue(&num);
    printf("After: %d\n", num);
    return 0;
}