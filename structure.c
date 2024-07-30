#include <stdio.h>
#include <string.h>

struct employee
{
    char empname[30];
    char department[30];
    int basicsalary;
    int allowance;
    int hra;
    int tax;
    int salary;
};

int main()
{
    struct employee e[10];
    int max = e[0].salary;
    int temp = 0;
    int l, m, temp2, temp3;
    char temp4[20], temp5[20];
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Name - Department - Salary : ");
        scanf("%s%s%d", &e[i].empname, &e[i].department, &e[i].basicsalary);

        e[i].allowance = 1500;
        e[i].hra = e[i].basicsalary * 0.07;
        e[i].tax = e[i].basicsalary * 0.10;
        e[i].salary = e[i].basicsalary + e[i].allowance + e[i].hra - e[i].tax;
    }

    printf("\nNAME DEPT_NAME BASIC_SALARY SALARY");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%-10s %-10s %-10d %-10d", e[i].empname, e[i].department, e[i].basicsalary, e[i].salary);
    }

    for (int i = 0; i < 3; i++)
    {
        if (e[i].salary > max)
        {
            max = e[i].salary;
            temp++;
        }
    }

    // printf("\nHighest Salary is : %d", max);
    // printf("\n Name = %s", e[temp - 1].empname);

    for (l = 0; l < 3; l++)
    {
        temp2 = e[l].salary;
        temp3 = e[l].basicsalary;
        strcpy(temp4, e[l].empname);
        strcpy(temp5, e[l].department);

        for (m = l - 1; m >= 0; m--)
        {
            if (temp2 < e[m].salary)
            {
                strcpy(e[m + 1].empname, e[m].empname);
                strcpy(e[m + 1].department, e[m].department);
                e[m + 1].basicsalary = e[m].basicsalary;
                e[m + 1].salary = e[m].salary;
            }
            else
            {
                break;
            }
        }
        e[m + 1].salary = temp2;
        e[m + 1].basicsalary = temp3;
        strcpy(e[m + 1].empname, temp4);
        strcpy(e[m + 1].department, temp5);
    }

    printf("\nAfter sorting\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n%-10s %-10s %-10d %-10d", e[i].empname, e[i].department, e[i].basicsalary, e[i].salary);
    }

    
}
