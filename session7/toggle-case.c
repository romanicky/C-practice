#include <stdio.h>
#include <string.h>

int isUppercaseChar(int number)
{
    return number > 64 && number < 91 ? 1 : 0;
}

int isLowercaseChar(int number)
{
    return number > 96 && number < 123 ? 1 : 0;
}

int main()
{
    int i = 0;
    char string[20];
    printf("Enter your string: ");
    scanf("%s", string);

    printf("Toggled string: ");

    while (string[i] != '\0')
    {
        int asciiNumber = (int)string[i];

        if (isUppercaseChar(asciiNumber))
        {
            printf("%c", (char)(asciiNumber + 32));
        }
        else if (isLowercaseChar(asciiNumber))
        {
            printf("%c", (char)(asciiNumber - 32));
        }
        else
        {
            printf("%c", string[i]);
        }

        i++;
    }
    printf("\n");

    return 0;
}