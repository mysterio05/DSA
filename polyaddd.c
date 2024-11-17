#include<stdio.h>
#include<stdlib.h>
struct poly
{
    int coeff;
    int expo;
    struct poly *link;
}*start,*ptr,*start1,*start2,*start3,*tmp,*ptr1,*ptr2,*ptr3;

int n,i,e,c;

struct poly *Create()
{
    start=NULL;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
        tmp=malloc(sizeof(struct poly));
        printf("enter the coefficient");
        scanf("%d",&c);
        printf("enter the expon");
        scanf("%d",&e);
        tmp->coeff=c;
        tmp->expo=e;
        tmp->link=NULL;
        if((start==NULL) || (tmp->expo > start->expo))      
        {
           tmp->link=start;
            start=tmp;
        }
        else 
        {
        ptr=start;
        while(ptr->link !=NULL && tmp->expo<=ptr->link->expo)
        {
            ptr=ptr->link;            
        }
        tmp->link=ptr->link;
        ptr->link=tmp;

        }
    }
    return start;
}
void main()
{
    printf("1 st polynominal  \n");
    start1=Create();

    printf("2 nd polynominal \n");
    start2=Create();

    ptr1=start1;
   
    start3=NULL;
    ptr3=NULL;

    printf("First polynominal is \n");
    while(ptr1 !=NULL)
    {
        printf("  %d X^%d  ",ptr1->coeff,ptr1->expo);
        
        if(ptr1->link!=NULL)
        {
            printf("+");
        }
        ptr1=ptr1->link;
    }
 ptr2=start2;
    printf("\nSecond polynominal is \n");
    while(ptr2 !=NULL)
    {
        printf("  %d X^%d  ",ptr2->coeff,ptr2->expo);
        if(ptr2->link!=NULL)
        {
            printf("+");
        }
        ptr2=ptr2->link;
    }
    ptr1=start1;
    ptr2=start2;
    ptr3=start3;
    while(ptr1 !=NULL && ptr2!=NULL)
    { tmp=malloc(sizeof(struct poly));
    tmp->link=NULL;
        if(ptr1->expo>ptr2->expo)
        {

            tmp->coeff=ptr1->coeff;
            tmp->expo=ptr1->expo;
            ptr1=ptr1->link;
        }
        else if(ptr2->expo >ptr1->expo ){
            
            
                tmp->coeff=ptr2->coeff;
                tmp->expo=ptr2->expo;
                ptr2=ptr2->link;
            
        
         }   else
            {
               
            
                tmp->coeff=ptr1->coeff+ptr2->coeff;
                tmp->expo=ptr1->expo;
                ptr1=ptr1->link;
                ptr2=ptr2->link;
            
            }
            if(start3==NULL)
        {
            start3=tmp;
            ptr3=start3;
        }
        else
        {
            ptr3->link=tmp;
            ptr3=tmp;
        }

        }
        
      

    while(ptr1 !=NULL)
    {
        tmp=malloc(sizeof(struct poly));
         
        tmp->coeff=ptr1->coeff;
        tmp->expo=ptr1->expo;
        tmp->link=NULL;
       ptr1=ptr1->link;
        if(start3==NULL)
        {
            start3=tmp;
             ptr3=start3;
        }
        else
        {
            ptr3->link=tmp;
            ptr3=tmp;
        }
       //  ptr1=ptr1->link;

    }
    while(ptr2!=NULL)
    {
        tmp=malloc(sizeof(struct poly));
        tmp->link=NULL;
        tmp->coeff=ptr2->coeff;
        tmp->expo=ptr2->expo;
       
      ptr2=ptr2->link;
        if(start3==NULL)
        {
            start3=tmp;
            ptr3=start3;
        }
        else{
            ptr3->link=tmp;
            ptr3=tmp;
        }
         //ptr2=ptr2->link;
    }

    printf("\nSum is \n");
    ptr3=start3;
    while(ptr3 !=NULL)
    {
        printf("  %d X^%d  ",ptr3->coeff,ptr3->expo);
        if(ptr3->link!=NULL)
        {
            printf("+");
        }
        ptr3=ptr3->link;
    }
    printf("\n");



    



}