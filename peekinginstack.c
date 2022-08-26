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

int isfull(struct stack *ptr)
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

void push(struct stack* ptr,int value)
{
    if(isfull(ptr))
    {
        printf("STACK OVERFLOW AND THE ELEMENT %d CANNOT BE PUSHED\n",value);
    }
    else
    {
    ptr->top++;
    ptr->arr[ptr->top]=value;
    }
}

int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        int value=ptr->top;
        ptr->top--;
        return value;
    }
}

int peek(struct stack *pk,int i)
{
    if(pk->top-i+1<0)
    {
        printf("INVALID INPUT\n");
        return -1;
    }
    else
    {
    int index=pk->top+1-i;
    return pk->arr[index];
    }
}

int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int*)malloc(sizeof(sp->size*sizeof(int)));

    if(isempty(sp))
    {
        printf("the stack is empty\n");
    }
    else
    {
        printf("the stack is not empty\n");
    }

    push(sp,5);
    push(sp,10);
    push(sp,15);
    push(sp,20);
    push(sp,25);
    printf("%d\n",sp->arr[sp->top]);
    pop(sp);
    push(sp,30);
    printf("%d\n",sp->arr[sp->top]);

    printf("%d\n",isfull(sp));
    push(sp,35);
    
    printf("%d",peek(sp,1));
    
return 0;
}
