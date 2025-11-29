// Read a full sentence using scanf() with %[^\n] and print it
#include <stdio.h>

int main()
{
    char sentence[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);
    printf("You entered: %s\n", sentence);
    return 0;
}
