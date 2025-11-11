#include <stdio.h>

int main()
{
    int ascii_value;
    char character;

    printf("Enter an ASCII value (0-127): ");
    scanf("%d", &ascii_value);

    character = (char)ascii_value;
    printf("The character for ASCII value %d is: %c\n", ascii_value, character);

    printf("Enter a character: ");
    scanf(" %c", &character);
    printf("The ASCII value for character %c is: %d\n", character, (int)character);
    return 0;
}