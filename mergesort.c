#include<stdio.h>

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void merge(int a[],int low,int high,int mid)
{
    int i,j,k;
    int b[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        k++;
        j++;
    }
    for(int i=0;i<=high;i++)
    {
        a[i]=b[i];
    }
}

void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,(mid+1),high);
        merge(a,low,high,mid);
    }
}

int main()
{
    int a[]={7,6,8,23,64,15,1};
    int n=7;
    //int low=0;
    //int high=n-1;
    printf("PRINTING THE ARRAY\n");
    print(a,n);
    printf("PRINTINF AFTER SORTING USING MERGESORT\n");
    mergesort(a,0,6);
    print(a,n);
    return 0;
}
