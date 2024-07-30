#include<stdlib.h>
#include<stdio.h>
#define s 5
int main()
{
    int *p;
    int *a;
    int i;

        p = malloc(sizeof(int));
        a = calloc(s,sizeof(int));

        printf("\n Enter num:");
        scanf("%d",p);

        printf("\n p = %d\n",*p);

    for(i = 0 ; i < s ; i++)
    {
        printf("enter %d: ",i+1);
        scanf("%d" , &a[i]);
    }

    
    for(i = 0 ; i < s ; i++)
    {
        printf("\n%d: %d\n",i ,a[i]);
    }

    free(p);
    free(a);



    return 0;
}