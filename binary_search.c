#include<stdio.h>
#define SIZE 6

int a[SIZE];

void getData(){
    int i;
    for(i=0;i<SIZE;i++){
        scanf("%d",&a[i]);
    }

}

void printArray(){
    int i;
    for(i=0;i<SIZE;i++){
        printf("\n%d",a[i]);
    }
}

void binarySearch(int search){
    int min,max,mid; 

    min = 0;
    max = SIZE - 1; 

    while(min<=max){
        mid = (min+max)/2;

        if(a[mid] == search){
            printf("\n Found");
            break;
        }else if(search > a[mid]){
        
            min = mid + 1; 
        }else {
            max = mid - 1;
        }
    }

}


int main(){
    int n; 
    getData();
    printArray();
    printf("\nEnter number that you want to search");
    scanf("%d",&n); 
    binarySearch(n);
    return 0; 
}