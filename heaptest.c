#include<stdio.h>
void heap(int a[],int n,int i)
{
    int l,r,largest,tmp;
    largest=i;
    l=(2*i)+1;
    r=(2*i)+2;

    if(l<n && a[l]>a[largest])
    {
        largest=l;
    }
    if(r<n && a[r]>a[largest])
    {
        largest=r;
    }
    if(largest !=i)
    {
        tmp=a[i];
        a[i]=a[largest];
        a[largest]=tmp;
        heap(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
    int i,tmp;
    for(i=(n/2)-1;i>=0;i--)
    {
        heap(a,n,i);
    }

    printf("MAX HEAP IS \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        tmp=a[0];
        a[0]=a[i];
        a[i]=tmp;
        heap(a,i,0);
    }

}
void main()
{
    int a[100],i,n;

    printf("enter the size ");
    scanf("%d",&n);

    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    heapsort(a,n);
    printf("\n sorted array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}