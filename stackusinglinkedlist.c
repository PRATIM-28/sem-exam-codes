#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* top=NULL;

void print(struct node* p)
{
    while(p!=0)
    {
        printf("element:-%d\n ",p->data);
        p=p->next;
    }
}

int isempty(struct node* tp)
{
    if(tp==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct node* tp)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node* push(struct node* tp,int x)
{
    if(isfull(tp))
    {
        printf("STACK OVERFLOW");
    }
    else
    {
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=x;
    n->next=tp;
    tp=n;
    return tp;
    }
}

int pop(struct node* tp)
{
    if(isempty(tp))
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
    struct node* n=tp;
    int x=n->data;
    tp=tp->next;
    free(n);
    return x;
    }
}

int main()
{
    top=push(top,6);
    top=push(top,5);
    top=push(top,4);
    top=push(top,3);
    
    print(top);
    
    int y=pop(top);
    printf("the element %d has been poped and the remaing stack is",y);
    print(top);
    
    return 0;
}
