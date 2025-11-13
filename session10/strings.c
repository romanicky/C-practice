#include <stdio.h>

int main()
{
    int i = 0;
    char name[10];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Name is: %s!\n", name);
    while (name[i] != '\0')
    {
        printf("Character %d: %c\n", i, name[i]);
        i++;
    }
    printf("\n");
    return 0;
}