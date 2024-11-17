#include<stdio.h>
void merge(int a[],int low ,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int k=0;

    int tmp[high-low+1];

    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            tmp[k]=a[i];
            i++;
        }
        else
        {
            tmp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        tmp[k]=a[i];
        k++;
        i++;

    }
    while(j<= high)
    {
        tmp[k]=a[j];
        k++;
        j++;
    }
    for(i=low;i<=high;i++)
    {
        a[i]=tmp[i-low];
    }
}
void mergesort(int a[],int low,int high)
{
  if(low<high)
  {
    int mid=(low+high)/2;

    mergesort(a,low,mid);
    mergesort(a,mid+1,high);

    merge(a,low,mid,high);
  }
}
void main()
{
    int i,n,a[100],low,high;

    printf("\nenter the size \n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   low=0;
   high=n-1;
    mergesort(a,low,high);
    printf("\nthe sorted array is\n");

    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}