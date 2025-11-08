#include <stdio.h>

int main()
{
    printf("Input 5 numbers into an array: ");
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}