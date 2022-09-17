#include<stdio.h>

void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int partition(int* a,int low,int high)
{
    int pivot=a[low];
    int i=low+1;
    int j=high,temp;
    do
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
    }while(i<j);
    
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}

void quicksort(int* a,int low,int high)
{
    if(low<high)
    {
    int partitionindex=partition(a,low,high);
    quicksort(a,low,partitionindex-1);
    quicksort(a,partitionindex+1,high);
    }
}

int main()
{
    int a[]={3,9,5,6,4,1,2,2,7,9};
    int n=10;
    printf("BEFORE SORTING THE ARRAY:-\n");
    print(a,n);
    printf("AFTER SORTING USING QUICKSORT ALGORITHM\n");
    quicksort(a,0,n-1);
    print(a,n);
    return 0;
    
}
