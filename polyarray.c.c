#include<stdio.h>
struct poly
{
    int coeff;
    int expon;
};
void main()
{
    struct poly p[100],t;
    int i,n,j;

    printf("enter the no of terms");
    scanf("%d",&n);

    printf("enter the coeff and exponent");
    for( i=0;i<n;i++)
    {
        scanf("%d%d",&p[i].coeff,&p[i].expon);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(p[j].expon<p[j+1].expon)
            {
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }
    }

    printf("the polynominal is :");
    for(i=0;i<n;i++)
    {
        printf("%d X^%d",p[i].coeff,p[i].expon);
        if(i!=n-1)
        {
            printf("+");
        }
    }
}