#include<stdio.h>
#define SIZE 5 

int a[SIZE];


void getData(){
    int i;
    for(i=0;i<SIZE;i++){
        printf("\nEnter value");
        scanf("%d",&a[i]); 
    }
}

void printData(){
    int i;
    for(i=0;i<SIZE;i++){
        printf("\n%d",a[i]); 
    }
}

void search(int key){
    int i; 
    int success = 0;//not found 
    int location = 0; 
     
    //10 20 30 40 50 
    //20 
    //20 found at 2nd location
     
    for(i=0;i<SIZE;i++){
        if(a[i] == key){
            success = 1;
             
            break;
        }
        location++;
    }
    if(success == 1){
        printf("\n%d Found",key);//location 
    }else{
        printf("\n%d Not Found",key);
    }

    printf("\n%d is found at %d location",key,location);// homework

    
}
//O(n) 



int main(){


    getData();
    printData();
    search(10);
    return 0;
}