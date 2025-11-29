// Print even from 10 to 0 using do while loop
#include <stdio.h>

int main()
{
    int i = 10;
    do
    {
        printf("%d ", i);
        i -= 2;
    } while (i >= 0);
    printf("\n"); // Add newline at the end
    return 0;
}
