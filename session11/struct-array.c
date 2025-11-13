#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

void compareAge(struct Person p1, struct Person p2)
{
    if (p1.age > p2.age)
    {
        printf("%s is older than %s.\n", p1.name, p2.name);
    }
    else if (p1.age < p2.age)
    {
        printf("%s is older than %s.\n", p2.name, p1.name);
    }
    else
    {
        printf("%s and %s are the same age.\n", p1.name, p2.name);
    }
}

int main()
{
    struct Person p1, p2;

    printf("Enter name of person 1: ");
    scanf("%s", p1.name);

    printf("Enter age of person 1: ");
    scanf("%d", &p1.age);

    printf("Enter name of person 2: ");
    scanf("%s", p2.name);

    printf("Enter age of person 2: ");
    scanf("%d", &p2.age);

    // Compare age
    compareAge(p1, p2);
}