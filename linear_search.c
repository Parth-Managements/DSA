#include <stdio.h>
int main ()
{
    int arr[5];

    printf("Enter the elements:");
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]==500)
        printf("%d",arr[i]);
    }

   return 0;
}