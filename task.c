// #include <stdio.h>

// int main()
// {
//     int arr[5] = {6, 1, 3, 4, 5};
//     int target = 5;
//     int flag = 0;
//     int temp = 0;

//     int i, j;

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {

//             if (arr[i] + arr[j] == target && arr[i] != arr[j])
//             {
//                 if (temp == i + j)
//                 {
//                     continue;
//                 }
//                 else
//                 {
//                     printf("%d and %d are indexes\n", i, j);
//                     temp = i + j;
//                     flag = 1;
//                 }
//             }
//         }
//     }

//     if (flag == 0)
//     {
//         printf("Not found");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main ()
// {
//     char arr[6];

//     printf("Enter your expression:");
//     scanf("%s",&arr);

//     int temp,temp1,temp2,temp3;
//     int value1,value2;
//     int ans;

//     temp = arr[0] - '0';
//     temp1 = arr[1] - '0';
//     temp2 = arr[3] - '0';
//     temp3 = arr[4] - '0';

//     value1 = (temp * 10) + temp1;
//     value2 = (temp2 * 10) + temp3;

//     if(arr[2] == '+')
//     {
//         ans = value1 + value2;
//     }
//     if(arr[2] == '-')
//     {
//         ans = value1 - value2;
//     }
//     if(arr[2] == '*')
//     {
//         ans = value1 * value2;
//     }
//     if(arr[2] == '/')
//     {
//         ans = value1 / value2;
//     }

//     puts(arr);
//     printf("%d",ans);
// }

#include <stdio.h>
#include <stdlib.h>

#define SIZE 500

char stack[SIZE];

int top = -1; //-1 -> EMPTY

void push(int num)
{
    if (top == SIZE - 1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        printf("\n%c POP", stack[top]);
        top--;
    }
}

void display()
{
    int i;
    // printf("\n%d\n",top);
    for (i = top; i >= 0; i--)
    {
        printf("\n%c", stack[i]);
    }
    // for(i=0;i<SIZE;i++)
    // {
    //     printf("\n%c", stack[i]);
    // }
}

void ishexadeci()
{
    int flag = 0;

    if ((stack[0] == '0') && (stack[1] == 'X' || stack[1] == 'x'))
    {
        for (int i = top; i >= 2; i--)
        {
            if ((stack[i] >= 'A' && stack[i] <= 'F') || (stack[i] >= '0' && stack[i] <= '9') || (stack[i] >= 'a' && stack[i] <= 'f'))
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("\nis valid");
    }
    else
    {
        printf("Not valid");
    }
}
void peep(int location)
{
    int index;
    index = top - location + 1;
    if (index >= 0 && index < SIZE)
    {
        printf("\n %d", stack[index]);
    }
    else
    {
        printf("\nInvalid Location");
    }
}

int main()
{
    char temp[50];
    printf("Enter a string:");
    scanf("%s", &temp);

    for (int i = 0; temp[i] != '\0'; i++)
    {
        stack[i] = temp[i];
        top++;
    }

    display();
    ishexadeci();
}
