#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct Student s1;
    s1.id = 101;
    strcpy(s1.name, "Thang");
    s1.marks = 94;
    printf("Student Details:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}