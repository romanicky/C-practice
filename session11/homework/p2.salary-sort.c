#include <stdio.h>

// Sort Employees by Salary using bubble sort
struct Employee
{
    char name[20];
    int salary;
};

int main()
{
    struct Employee e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name of employee %d: ", i + 1);
        scanf(" %19[^\n]", e[i].name);

        printf("Enter salary of %s: ", e[i].name);
        scanf("%d", &e[i].salary);
    }
    // Bubble sort by salary
    for (int step = 0; step < 3 - 1; step++)
    {
        for (int i = 0; i < 3 - step - 1; i++)
        {
            if (e[i].salary < e[i + 1].salary)
            {
                struct Employee temp = e[i];
                e[i] = e[i + 1];
                e[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Employee: %s, Salary: %d\n", e[i].name, e[i].salary);
    }

    return 0;
}