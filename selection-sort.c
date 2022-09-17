#include<stdio.h>

void print(int *a,int n)
{
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void selectionsort(int *a,int n)
{
    int temp,indexofmin;
    for(int i=0;i<n-1;i++)
    {
        indexofmin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[indexofmin])
            {
                indexofmin=j;
            }
        }
        temp=a[i];
        a[i]=a[indexofmin];
        a[indexofmin]=temp;
    }
}

int main()
{
    int a[]={45,6,9,8,1};
    int n=5;
    printf("BEFORE SELECTION SORTING:-\n");
    print(a,n);
    printf("AFTER SELECTION SORTING:-\n");
    selectionsort(a,n);
    print(a,n);
    return 0;
    
}
