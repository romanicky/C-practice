#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = NULL; // Pointer to hold the address of dynamically allocated memory
    int n;         // Variable to store number of elements

    // Ask user for number of elements
    printf("Enter the no.of elements:");
    scanf("%d", &n);
    // Dynmically allocate memory for n integers
    p = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return 1; // Exit with error code
    }
    else
    {
        // Memory allocation successful
        printf("Enter the values: \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p[i]); // Read values into allocated memory
        }
        // Display the entered elements
        printf("The entered elements are: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", p[i]);
        }
        printf("\n");
        free(p); // Free the dynamically allocated memory
    }

    return 0;
}