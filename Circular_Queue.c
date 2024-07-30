#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

char queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if (rear == SIZE - 1 && front == 0)
    {
        printf("\nQueue is Full");
    }
    else if (rear == front - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        if (rear == SIZE - 1)
        {
            rear = 0;
            queue[rear] = data;
        }
        else
        {
            rear++;
            queue[rear] = data;

            if (front == -1)
            {
                front = 0;
            }
        }
    }
}

void dequeue()
{

    if(front == -1 ){
        printf("\nQueue is Empty");
         
    }
    else if(front == rear){
        printf("\n%d is removed",queue[front]);  
        front=-1;
        rear=-1;
    }
    else if(front == SIZE - 1 ){
        printf("\n%d is removed",queue[front]); 
        front=0;
    }
    else
    {
        printf("\n%d is removed",queue[front]); 
        front++; 
    }
     
}


void display()
{
    for(int i=0;queue[i]!='\0';i++)
    {
        printf("%c ",queue[i]);
    }
    // if (front == -1)
    // {
    //     printf("Queue is empty!!");
    // }
    // else
    // {
    //     if (rear >= front)
    //     {
    //         for (int i = front; i <= rear; i++)
    //         {
    //             printf("%d ", queue[i]);
    //         }
    //     }
    //     else
    //     {
    //         for (int i = 0; i <= rear; i++)
    //         {
    //             printf("%d ", queue[i]);
    //         }
    //         for (int i = front; i < SIZE; i++)
    //         {
    //             printf("%d ", queue[i]);
    //         }
    //     }
    // }
}

int main()
{

    
    
    int choice , data;

        while(-1){ 
        printf("\n\n0 For Exit\n1 Add \n2 Delete\n3 For Display\nEnter your choice");
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



        default:
            printf("INVALID CHOICE PTA");
            break;
        }
    }
    return 0;
}