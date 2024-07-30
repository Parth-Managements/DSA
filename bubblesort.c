#include <stdio.h>
#define size 10

int arr[]={23,45,74,123,8,-2,13,353,75};


void printData(){

    printf("\n Elements:\n");
    for( int  i = 0; i < size; i++)

    {
        printf(" %d ",arr[i]);
    }
    

}

void bubblesort(){

    int i,j;
    int temp;

    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }

}


int main ()
{

    printData();
    bubblesort();
    printData();
    return 0;
}