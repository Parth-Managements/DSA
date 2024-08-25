#include <stdio.h>
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

void display()
{
    struct node *i = head;

    for (i = head; i != NULL; i = i->next)
    {
        printf(" %d", i->data);
    }
}

void addNodeBeg(int num)
{
    struct node *tmp = NULL;
    if (head == NULL)
    {
        addNode(num);
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = head;
        head = tmp;
    }
}
void search(int chk)
{
    struct node *i;
    int temp = 0;

    for (i = head; i != NULL; i = i->next)
    {
        if (i->data == chk)
        {
            temp = 1;
            break;
        }
        else
        {
            temp = 0;
        }
    }
    if (temp == 1)
    {
        printf("\n Found");
    }
    else
    {
        printf("\nNot found ");
    }
}

void sorting()
{
    struct node* i;
    struct node* j;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    for(i=head;i!=NULL;i=i->next)
    {
        for(j=head;j!=NULL;j=j->next)
        {
            if(i->data < j->data)
            {
                temp->data = i->data;
                i->data = j->data;
                j->data = temp->data;
            }
        }
    }
}

void max()
{
    struct node *i;
    int max = -1;

    for (i = head; i != NULL; i = i->next)
    {
        if (max < i->data)
        {
            max = i->data;
        }
    }

    printf("\n Max = %d", max);
}

void sum()
{
    struct node *i;
    int sum = 0;

    for (i = head; i != NULL; i = i->next)
    {
        sum += i->data;
    }

    printf("\n Sum = %d ", sum);
}

void addany(int src, int num)
{
    struct node *i;
    struct node *temp;

    for (i = head; i != NULL; i = i->next)
    {
        if (i->data == src)
        {
            break;
        }
    }

    if (i == NULL)
    {
        printf("\nInvalid source : %d", src);
    }
    else if (i == last)
    {
        addNode(num);
    }
    else
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->next = i->next;
        i->next = temp;
    }
}
void deletebeg()
{
    if (head == NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        struct node *tmp;
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
void deleteLast()
{
    if (head == NULL)
    {
        printf("List is empty!!");
    }
    struct node *p;

    for (p = head; p->next != last; p = p->next)
        ;
    p->next = NULL;
    printf("\n %d removed", last->data);
    free(last);
    last = p;
}

void deleteany(int src)
{
    struct node *i;
    struct node *temp;

    for (i = head; i != NULL; i = i->next)
    {
        if (i->next->data == src)
        {
            break;
        }
    }

    if (i == NULL)
    {
        printf("\nInvalid source : %d", src);
    }
    else if (i == head)
    {
        deletebeg();
    }
    else if (i == last)
    {
        deleteLast();
    }
    else
    {
        temp = i->next;
        i->next = i->next->next;
        free(temp);
    }
}

int main()
{
    int choice, num, src;
    while (10)
    {
        printf("\n1 For Add Node + END");
        printf("\n2 For Add Node + BEG");
        printf("\n3 For Add Node + ANY");

        printf("\n4 For Delete Node - END");
        printf("\n5 For Delete Node - BEG");
        printf("\n6 For Delete Node - ANY");

        printf("\n7 For Display LinkedList");
        printf("\n8 Sorting ");

        printf("\n0 EXIT\n");

        printf("\nEnter Your Choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addNode(num);
            break;
        case 2:
            printf("\nEnter number");
            scanf("%d", &num);
            addNodeBeg(num);
            break;
        case 3:
            printf("\nEnter souce:");
            scanf("%d", &src);
            printf("\nEnter value:");
            scanf("%d", &num);
            addany(src, num);
            break;

        case 4:
            deleteLast();
            break;
        case 5:
            deletebeg();
            break;
        case 6:
            printf("\nEnter src:");
            scanf("%d", &num);
            deleteany(num);
            break;
        case 7:
            display();
            break;
        case 8:
            sorting();
            break;
        case 0:
            exit(0);
        }
    }
    return 0;
}
