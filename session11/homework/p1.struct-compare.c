#include <stdio.h>

// Compare Two Students by Marks
struct Student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct Student s[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %19[^\n]", s[i].name);

        printf("Enter roll of %s: ", s[i].name);
        scanf("%d", &s[i].roll);

        printf("Enter marks of %s: ", s[i].name);
        scanf("%f", &s[i].marks);
    }

    // print data
    if (s[0].marks > s[1].marks)
    {
        printf("%s has higher marks: %.2f\n", s[0].name, s[0].marks);
    }
    else
    {
        printf("%s has higher marks: %.2f\n", s[1].name, s[1].marks);
    }

    return 0;
}