#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p = NULL;
    int n;

    printf("Enter the no.of bytes to allocate: ");
    scanf("%d", &n);

    printf("THE VALUE OF P BEFORE ALLOCATION = %d &p = %p\n", *p, &p);

    p = malloc(n);

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Memory allocation successful\n");
        printf("THE VALUE OF P AFTER ALLOCATION = %d &p = %p\n", *p, &p);
    }
    free(p);
    return 0;
}