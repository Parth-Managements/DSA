#include <stdio.h>

int main ()
{
    int n=9999;
    int count = 0;

    while(n>0)
    {
        n=n/10;
        count++;
    }

    printf("%d",count);
}