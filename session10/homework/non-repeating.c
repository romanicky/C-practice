#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "aabbccd";

    /* Build frequency table for all possible unsigned char values */
    int freq[256] = {0};
    for (size_t i = 0; i < strlen(str); i++)
    {
        unsigned char c = (unsigned char)str[i];
        freq[c]++;
    }

    /* Find first character with frequency 1 */
    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)str[i];
        if (freq[c] == 1)
        {
            printf("First non-repeating character at index %d: %c\n", i, str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");
    return 0;
}