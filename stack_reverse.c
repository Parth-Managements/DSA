#include<stdio.h>
#include<string.h>
#define SIZE 100

char stack[SIZE];

int top=-1;
+9

void push(char num){
    if(top == SIZE - 1){
        printf("\nOVERFLOW");
    }else{
        top++;
        stack[top] = num; 
    }
}

void pop(){
    if(top==-1){
        printf("\nUNDERFLOW");
    }else{
        printf("\n%c POP",stack[top]);
        top--; 
    }
}

void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%c",stack[i]);
    }
}

void peep(int location){
    int index;
    index = top - location + 1 ;
    if(index >= 0 && index < SIZE){
        printf("\n %d",stack[index]);
    }else{
        printf("\nInvalid Location");
    }
}


int main ()
{
    char str[SIZE];
    printf("Enter name:");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }

    display();

    
    return 0;
}