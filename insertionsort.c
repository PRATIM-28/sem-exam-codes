#include<stdio.h>

void print(int* a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insertionsort(int *a,int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int j=i-1;
        int key=a[i];
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main()
{
    int a[5]={78,9,65,8,7};
    int n=5;
    printf("BEFORE INSERTION SORT\n");
    print(a,n);
    insertionsort(a,n);
    printf("AFTER INSERTION SORT\n");
    print(a,n);
    return 0;
}
