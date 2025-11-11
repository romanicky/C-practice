#include <stdio.h>

int main()
{
    int x = 5;

    printf("x = %d\n", x);
    printf("Address of x = %p\n", &x);

    int *ptr = &x;
    printf("Value of ptr = %p\n", ptr);

    // Indirectly access the value of x using the pointer
    printf("Value pointed to by ptr = %d\n", *ptr);
    return 0;
}