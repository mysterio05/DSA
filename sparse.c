#include<stdio.h>
void main()
{
int a[100][100],b[100][100],i,j,l,count,r,c;

printf("enter the rows and column");
scanf("%d%d",&r,&c);

printf("enter the elements in sparse matrix");
count=0;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
        if(a[i][j]!=0)
        {
            count++;
        }
    }
}

printf("the sparse matrix is \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

b[0][0]=r;
b[0][1]=c;
b[0][2]=count;
l=1;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        if(a[i][j]!=0)
     {
        b[l][0]=i;
     b[l][1]=j;
     b[l][2]=a[i][j];
     l++;
     }
    }
}
printf("the effective matrix is \n");
for(i=0;i<=count;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",b[i][j]);
    }
     printf("\n");
}
}


