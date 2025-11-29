// Find the largest of 4 numbers using ternary operator
#include <stdio.h>w

int main()
{
    int num1, num2, num3, num4;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    int largest = (num1 > num2 && num1 > num3 && num1 > num4) ? num1
                  : (num2 > num3 && num2 > num4)              ? num2
                  : (num3 > num4)                             ? num3
                                                              : num4;
    printf("The largest number is: %d\n", largest);
    return 0;
}
