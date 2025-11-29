#include <stdio.h>

int main()
{
    // Write a C program to evaluate the following complex expression and print the result:
    int a = 6, b = 3, c = 2;
    int result = (a + b) * c & a | b;
    printf("Given a = %d, b = %d, c = %d\n", a, b, c);
    printf("Expression: (a + b) * c & a | b\n");
    printf("Step by step:\n");
    printf("1. a + b = %d + %d = %d\n", a, b, a + b);
    printf("2. (a + b) * c = %d * %d = %d\n", a + b, c, (a + b) * c);
    printf("3. (a + b) * c & a = %d & %d = %d\n", (a + b) * c, a, ((a + b) * c & a));
    printf("4. ((a + b) * c & a) | b = %d | %d = %d\n", ((a + b) * c & a), b, result);
    printf("Final Result: %d\n", result);
    return 0;
}
