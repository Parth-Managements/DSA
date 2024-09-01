#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *back;
} *head = NULL, *last = NULL;

void addnode(int data)
{
    struct node *temp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        head->back = NULL;
        last = head;
    }
    else
    {
        temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->back = last;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void insertatbeg(int data)
{
    if (head == NULL)
    {
        addnode(data);
    }
    else
    {
        struct node *temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->back = NULL;
        temp->next = head;
        head->back = temp;
        head = temp;
    }
}

void insertany(int src, int data)
{
    if (head == NULL)
    {
        addnode(data);
    }
    struct node *i;
    for (i = head; i != NULL; i = i->next)
    {
        if (i->data == src)
        {
            break;
        }
    }
    if (i->next == NULL)
    {
        struct node *temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->back = i;
        temp->next = NULL;
        i->next = temp;
        last = temp;
    }
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->back = i;
    temp->next = i->next;
    i->next->back = temp;
    i->next = temp;
}

void deleteatbeg()
{
    struct node *i = head;
    head = head->next;
    printf("%d is removed", i->data);
    free(i);
    head->back = NULL;
}

void deleteatend()
{
    struct node *p = last->back;
    p->next = NULL;
    free(last);
    last = p;
}
void deleteany(int src)
{
    if (head == NULL)
    {
        printf("\nLinked list is empty");
    }
    struct node *i;
    for (i = head; i != NULL; i = i->next)
    {
        if (i->data == src)
        {
            break;
        }
    }
    if (i->data == last->data)
    {
        deleteatend();
    }
    else if (i->data == head->data)
    {
        deleteatbeg();
    }
    else
    {
        struct node *prev = i->back;
        struct node *front = i->next;
        prev->next = i->next;
        front->back = prev;
        free(i);
    }
}

void display()
{
    struct node *i;
    for (i = head; i != NULL; i = i->next)
    {
        printf(" %d", i->data);
    }
}

void revdisplay()
{
    struct node *i;
    for (i = last; i != NULL; i = i->back)
    {
        printf(" %d", i->data);
    }
}

int main()
{
    addnode(10);
    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);
    insertany(30,70);
    printf("\nSimple Display\n");
    display();
    printf("\nReverse Display\n");
    revdisplay();

    return 0;
}