// read data from a file stream using fscanf
#include <stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int age;
    // Open the file in read mode
    file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }
    // Append new text
    fprintf(file, "Hello, this is a file writing example in C.\n");
    // Close the file
    fclose(file);
    printf("Data written to file successfully.\n");
    return 0;
}
