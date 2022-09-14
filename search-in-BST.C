#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int isBST(struct node* root)
{
    static struct node* prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL&&root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

struct node* search(struct node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(key==root->data)
    {
        return root;
    }
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
}


int main()
{
    struct node* p=newnode(8);
    struct node* p1=newnode(5);
    struct node* p2=newnode(11);
    struct node* p3=newnode(4);
    struct node* p4=newnode(7);
    struct node* p5=newnode(9);
    struct node* p6=newnode(12);
   // struct node* p7=newnode(7);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    
    inorder(p);
    printf("\n");
    printf("%d",isBST(p));
    
    printf("\n");
    struct node* n=search(p,100);
    
    if(n!=NULL)
    {
        printf("%d \n",n->data);
    }
    else
    {
        printf("THE ELEMENT WAS NOT FOUND");
    }
    return 0;
    
}
