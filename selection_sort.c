#include <stdio.h>
#define size 5

int arr[size];


void getData(){
    int i;

    printf("Enter the Elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

}


void printData(){


    for( int  i = 0; i < size; i++)

    {
        printf(" %d ",arr[i]);
    }
    

}

void selectionsort(){

    int i,j;
    int temp,min;

    for(i=0;i<size;i++)
    {
        min = i;
        for(j=i+1;j<size;j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }

            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;

        

    }

}




int main ()
{

    getData();
    printf("Elements Before Sorting\n");
    printData();
    selectionsort();
    printf("\nElements After Sorting\n");
    printData();
    return 0;
}


 