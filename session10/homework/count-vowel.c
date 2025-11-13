#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[1024];
    unsigned long vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", buf);

    for (size_t i = 0; buf[i] != '\0'; ++i)
    {
        unsigned char c = (unsigned char)buf[i];

        /* Digit? ASCII 48..57 */
        if (c >= 48 && c <= 57)
        {
            ++digits;
            continue;
        }

        /* Uppercase A-Z: 65..90 ; lowercase a-z: 97..122 */
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            /* normalize to lowercase by adding 32 when uppercase */
            unsigned char lc = c;
            if (lc >= 65 && lc <= 90)
                lc = (unsigned char)(lc + 32); /* 'a' - 'A' == 32 */

            /* vowels in ASCII lowercase: a=97,e=101,i=105,o=111,u=117 */
            if (lc == 97 || lc == 101 || lc == 105 || lc == 111 || lc == 117)
                ++vowels;
            else
                ++consonants;
            continue;
        }

        /* Everything else is treated as special (spaces, punctuation, etc.) */
        ++special;
    }

    printf("Vowels: %lu\n", vowels);
    printf("Consonants: %lu\n", consonants);
    printf("Digits: %lu\n", digits);
    printf("Special characters: %lu\n", special);

    return 0;
}
