#include<stdio.h>
int n,i,j,a[100],key,t,mid,lb,ub,found;
void linear(int a[],int n,int key)
{
    found=0;
 
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("element %d is found at position %d",a[i],i);
            found=1;
            break;
          
    
        }
      
    }
    if(found==0)
        {
        printf("\n %d element is not found",key);
    }
    printf("\n");
    if(key<a[i])
    {
        printf("\nelement is not found");
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void binary(int a[],int n,int key)
{

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }
    }

    printf("sorted array is ");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);

    }
   lb=0;
        ub=n;
        found=0;
        
   while(lb<=ub)
    {
     
        mid=(ub+lb)/2;

        if(a[mid]==key)
        {
            printf("\nelement %d is found at position %d",a[mid],mid);
            found=1;
            break;
        }
        else{
            if(key<a[mid])
            {
             ub=mid-1;
            }
            else
            {lb=mid+1;} 
        }
    }

    if(found==0)
    {
        printf("\n %d element does not exist in array",key);
    }



}


void main()
{
    int choice;
    printf("\nenter the size of array");
    scanf("%d",&n);

    printf("\nenter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
        do{
           printf("\nMENU");
            printf("\nenter the value to search\n");
           scanf("%d",&key);
           printf("\n1:LINEAR SEARCH \n2:BINARY SEARCH\n3:exit");
           printf("\n enter the choice");
           scanf("%d",&choice);

          

           switch(choice)
           {
            case 1:linear(a,n,key);break;
            case 2:binary(a,n,key);break;
            default:break;
           }
        }
        while(choice<=2);
}