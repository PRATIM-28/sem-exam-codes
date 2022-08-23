#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack* ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack* ptr,int val)
{
    if(isfull(ptr))
    {
        printf("STACK OVERFLOW and cannot push the %d element to the stack \n",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack* ptr)
{
    if(isempty(ptr))
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        int val=ptr->top;
        ptr->top--;
        return val;
    }
    return 0;
}

int peek(struct stack* ptr,int i)
{
    if(ptr->top-i+1<0)
    {
        printf("INVALID PEEK REQUEST");
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top-i+1];
    }
}

int main()
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=10;
    s->arr=(int*)malloc(s->size*sizeof(int));
    
    if(isempty(s))
    {
        printf("the stack is empty\n");
    }
    else
    {
        printf("the stack is not empty\n");
    }
    
    push(s,5);
    printf("after push\n");
    printf("%d\n",isempty(s));
    printf("%d\n",isfull(s));
    push(s,10);
    push(s,15);
    push(s,20);
    push(s,25);
    push(s,30);
    push(s,35);
    push(s,40);
    push(s,45);
    push(s,50);
    push(s,55);
    printf("%d\n",isempty(s));
    printf("%d\n",isfull(s));
    
    printf("peeking in the fourth position of the stack is %d \n ",peek(s,4));
    printf("peeling int the first position of the stack is %d \n",peek(s,1));
    
    printf("printing the whole stack");
    
    return 0;
}
