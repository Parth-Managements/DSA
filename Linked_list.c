#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *last = NULL;

void addNode(int num)
{
    struct node *tmp;

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {

        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}


void display(){
   struct node *i = head ; 

    for(i=head; i!=NULL ;i=i->next){
        printf(" %d",i->data);
    }
}

int main()
{
    addNode(10); // head
    addNode(20); // second
    addNode(30);
    addNode(40);

    display();
    return 0;
}