#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];

int f=-1;
int r=-1;

void enqueue(int data)
{
    if(r == SIZE - 1)
    {
        printf("Queue is full!!");
    }

    else
    {
        r++;
        queue[r] = data;
    
        if(f==-1)
        {
            f=0;
        }
    }

}

void dequeue()
{
    if(f==-1)
    {
        printf("\n Queue is empty!!");
    }
    else if (f == r)
    {
        printf("\n removed %d" , queue[f]);
        f=-1;
        r=-1;
    }
    else
    {
        printf("\n removed %d" , queue[f]);
        f++;
    }



}

void display()
{
    if(f==-1)
    {
        printf("Queue is Empty!!!!!!");
    }
    else
    {
        for(int i=f;i<=r;i++)
        {
            printf("%d ",queue[i] );
        }
    }
}

void count()
{

    int one= 0;
    int two=0;
    int three = 0;
    int four =0;

    for(int i=f;i<=r;i++)
    {

        if(queue[i] >=1 && queue[i]<=9)
        {
            one++;
        }
        if(queue[i] >=10 && queue[i]<=99)
        {
            two++;
        }   
        if(queue[i] >=100 && queue[i]<=999)
        {
            three++;
        }
        if(queue[i] >=1000 && queue[i]<=9999)
        {
            four++;
        }
    }

    printf("\nOne digits numbers are %d times",one);
    printf("\nTwo digits numbers are %d times",two);
    printf("\nThree digits numbers are %d times",three);
    printf("\nFour digits numbers are %d times",four);

    
}



int main ()
{
    int choice , data;

        while(-1){ 
        printf("\n\n0 For Exit\n1 Add \n2 Delete\n3 For Display\n4.)Count\nEnter your choice");
        scanf("%d",&choice); 

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("Enter your data:");
            scanf("%d",&data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 2+1:
            display();
            break;
        case 4:
            count();
            break;


        default:
            printf("INVALID CHOICE PTA");
            break;
        }
    }
    

    return 0;
}