#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Cranes";
    char b[] = "Varsity";
    int result = strcmp(a, b);
    printf("Compare result: %d\n", result);
    return 0;
}