#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Student
{
    char name[25];
    char batch[25];
    int rank;
    char colgName[25];
};

int main()
{
    int totalStudents;
    struct Student *s;
    struct Student temp;
    printf("Enter total Students");
    scanf("%d", &totalStudents);

    s = calloc(totalStudents, sizeof(struct Student));
    for (int i = 0; i < totalStudents; i++)
    {
        printf("Enter name batch Rank and colgName");
        scanf("%s%s%d%s", &s[i].name, &s[i].batch, &s[i].rank, &s[i].colgName);
    }

    for (int i = 0; i < totalStudents; i++)
    {
        printf("\n******\n");
        printf("\nName = %s \n batch = %s \n Rank = %d \n ColgName = %s", s[i].name, s[i].batch, s[i].rank, s[i].colgName);
    }

    // for (int i = 0; i < totalStudents; i++)
    // {
    //     for (int j = 0; j < totalStudents - 1; j++)
    //     {
    //         if (s[j].rank > s[j + 1].rank)
    //         {

    //             temp = s[j];
    //             s[j] = s[j + 1];
    //             s[j + 1] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < totalStudents; i++)
    // {
    //     printf("\n******\n");
    //     printf("\nName = %s \n batch = %s \n Rank = %d \n ColgName = %s", s[i].name, s[i].batch, s[i].rank, s[i].colgName);
    // }

    for (int i = 0; i < totalStudents; i++)
    {
        for (int j = 0; j < totalStudents - 1; j++)
        {
            
        }
    }
    for (int i = 0; i < totalStudents; i++)
    {
        printf("\n******\n");
        printf("\nName = %s \n batch = %s \n Rank = %d \n ColgName = %s", s[i].name, s[i].batch, s[i].rank, s[i].colgName);
    }
    free(s);

    return 0;
}