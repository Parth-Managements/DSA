#include <stdio.h>
#include <stdlib.h>
#define size 5

int stack[size];
int top = -1;

void push(int num)
{
    if (top == size - 1)
    {
        printf("\nOverflow");
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
        printf("\nUnderFlow");
    }
    else
    {
        printf("\n%d is removed", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("\n %d", stack[i]);
        }
    }
}
void peep(int location)
{
    int index = top - location + 1;
    if(index >=0 && index < size)
    {
        printf("\n %d",stack[index]);
    }
    else
    {
        printf("\nInvalid condition");
    }   
}

int main ()
{
    int choice;
    int num;
    int location;
    while (1) { 
        printf("\n0 For Exit\n1 For PUSH\n2 For POP\n3 For Display\n4 For Peep\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                exit(0); // Exit the program
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nEnter the location: ");
                scanf("%d", &location);
                peep(location);
                break;
            default:
                printf("INVALID CHOICE");
                break;
        }
    }

    return 0;

}