#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p = NULL;
    int count;

    /* Ask for number of integers to allocate (clearer and less error-prone than raw bytes) */
    printf("Enter the number of ints to allocate: ");
    if (scanf("%d", &count) != 1 || count <= 0)
    {
        fprintf(stderr, "Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    /* Do not dereference p before allocation; it's NULL now. Print pointer safely. */
    printf("Pointer p before allocation = %p, &p = %p\n", (void *)p, (void *)&p);

    /* Allocate enough bytes for 'count' ints */
    p = malloc((size_t)count * sizeof *p);
    if (p == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocation successful: p = %p\n", (void *)p);

    /* Initialize allocated memory to avoid reading uninitialized values */
    for (int i = 0; i < count; i++)
        p[i] = 0;

    /* Safe to dereference now */
    printf("p[0] = %d\n", p[0]);

    free(p);
    return 0;
}