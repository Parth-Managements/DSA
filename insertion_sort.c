#include <stdio.h>
#define size 5



void getData(int arr[])
{
    int i;

    printf("Enter the Elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printData(int arr[])
{

    for (int i = 0; i < size; i++)

    {
        printf(" %d ", arr[i]);
    }
}

void insertionsort(int arr[])
{
    int i, j, temp;

    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{

    int arr[size];

    getData(arr);
    printf("Elements Before Sorting\n");
    printData(arr);
    insertionsort(arr);
    printf("\nElements After Sorting\n");
    printData(arr);
    return 0;
}