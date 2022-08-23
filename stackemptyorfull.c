#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void isempty(struct stack *p)
{
    if(p->top==-1)
    {
        printf("the stack is empty");
    }
    else
    {
        printf("the stack is not empty");
    }
}

/*int isfull(struct stack *p)
{
    if(p->top==p->size-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}*/

int main()
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=80;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));

    isempty(s);
    printf("\n");

    s->arr[0]=5;
    s->top++;
    
    isempty(s);

    return 0;
}
