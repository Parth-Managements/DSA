#include <stdio.h>
#define size 8

int master[] = {12, 34, 56, 78, 98, 98, 54, 90};
/*
12 56 98 54
34 78 98 90

56 98 54
78 98 90 12 34

98 54
98 90 12 34 56 78

54
90 12 34 56 78

empty
12 34 56 78 98 98 54 90
*/
int tie1;
int tie2;
int tiecnt = 0;
int pntA = 0;
int pntB = 0;
int playerA[size];
int playerB[size];
int a = 0;
int b = 0;
void distribution()
{
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            playerA[a] = master[i];
            a++;
        }
        if (i % 2 == 1)
        {
            playerB[b] = master[i];
            b++;
        }
    }
}

void display()
{
    printf("\nPlayer A \n -----------------------------------------------------\n");
    for (int i = pntA; i < a; i++)
    {
        printf("%d ", playerA[i]);
    }
    printf("\nPlayer B \n -----------------------------------------------------\n");
    for (int i = pntB; i < b; i++)
    {
        printf("%d ", playerB[i]);
    }
}

void battle()
{
    int temp_1 = playerA[pntA];
    int temp_2 = playerB[pntB];

    if (temp_1 > temp_2)
    {
        if (tiecnt % 2 == 1)
        {
            printf("\n\nPlayer A wins!!!!!!!!!\n");
            playerA[a] = tie1;
            a++;
            playerA[a] = tie2;
            a++;
            tiecnt++;
            playerA[a] = playerA[pntA];
            a++;
            playerA[a] = playerB[pntA];
            a++;
        }
        else
        {
            printf("\n\nPlayer A wins!!!!!!!!!\n");
            playerA[a] = playerA[pntA];
            a++;
            playerA[a] = playerB[pntA];
            a++;
        }
    }
    else if (temp_1 == temp_2)
    {
        printf("\n\n----------------TIE------------------------\n");
        tie1 = playerA[pntA];
        tie2 = playerB[pntB];
        tiecnt++;
    }
    else
    {
        if (tiecnt % 2 == 1)
        {
            playerB[b] = tie1;
            b++;
            playerB[b] = tie2;
            b++;
            tiecnt++;
            playerB[b] = playerA[pntA];
            b++;
            playerB[b] = playerB[pntB];
            b++;
        }
        else
        {
            printf("\n\nPlayer B wins!!!!!!!!!\n");
            playerB[b] = playerA[pntA];
            b++;
            playerB[b] = playerB[pntB];
            b++;
        }
    }
    pntA++;
    pntB++;
}

int check()
{
    int cntA = 0;
    int cntB = 0;
    for (int i = pntA; i < a; i++)
    {
        cntA++;
    }
    for (int i = pntB; i < b; i++)
    {
        cntB++;
    }

    if (cntA == 0)
    {
        printf("\n\nPlayer B wins the final game\n\n");
        return 1;
    }

    if (cntB == 0)
    {
        printf("\n\nPlayer A wins the final game\n\n");
        return 1;
    }

    return 0;
}

int main()
{
    int count = 1;
    distribution();
    while (count <= 4)
    {
        if (check())
        {
            break;
        }
        battle();
        display();
        count++;
    }

    return 0;
}