#include<stdio.h>

void print(int* a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void bubblesort(int* a,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int a[10]={3,5,8,6,5,55,45,88,9,10};
    int n=10;
    printf("THE ARRAY BEFORE SORTING IS GIVEN AS: -\n");
    print(a,n);
    bubblesort(a,n);
    printf("THE ARRAY AFTER BUBBLE SORT IS:-\n");
    print(a,n);
    return 0;
}
