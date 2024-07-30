#include<stdio.h>
#define S1 5 
#define S2 5 
#define S3 10 

void print (int z[])
{
    for (int i = 0; i < S3; i++)
    {
        printf("%d,",z[i]);
    }
    
}

void mergesort(int x[],int y[],int z[])
{
    int i=0,j=0,k=0; 


    while(i<S1 && j<S2){
        if(x[i] < y[j]){
            z[k] = x[i]; 
            i++;
            k++;
        }
        else{
            z[k] = y[j];
            j++;
            k++;
        }
    }
    while(i<S1){
        z[k++] = x[i++];
    }
    while(j<S2){
        z[k++] = y[j++];
    }
}

int main(){

    
    int x[] = {11,22,33,44,55};
    int y[] = {10,20,30,60,70}; 
    int z[S3];
 
    mergesort(x,y,z);
    print(z);
    return 0; 

}