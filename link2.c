#include<stdio.h>
#include<stdlib.h>

int item,key;
struct node
{
    int data;
    struct node*link;
}*start;

struct node *ptr,*q,*tmp;

void insertionbeginning()
{
    ptr=start;
    tmp=malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&item);
    tmp->data=item;
    tmp->link=start;
    start=tmp;


}

void insertionbet()
{
    tmp=malloc(sizeof(struct node));
    printf("enter the item");
    scanf("%d",&item);
    tmp->data=item;
    
    printf("enter the element after which insert");
    scanf("%d",&key);
    ptr=start;
    while(ptr->link!=NULL)
    {
        if(ptr->data==key)
        {
            q=ptr;
            break;
        }
        else
        ptr=ptr->link;
    }
    if(q->link!=NULL)
    {
        tmp->link=q->link;
        q->link=tmp;
    }
    else
    {
        printf("element cannot be add");
    }

}

void insertionend()
{
    
    tmp=malloc(sizeof(struct node));
    printf("enter the item");
    scanf("%d",&item);
    tmp->data=item;
    struct node *ptr1;
    tmp->link=NULL;
    if(start==NULL)
    {
        start=tmp;
    }
    else{
     ptr=start;
     while(ptr->link!=NULL)
     {
        ptr=ptr->link;
     }
     ptr->link=tmp;
    }
     

     

}

void delectionbeg()
{
    if(start==NULL)
    {
        printf("LIST IS EMPTY");
    }
    else{
        tmp=start;
        start=tmp->link;
        tmp->link=NULL;
        printf("delected element is %d",tmp->data);
        free(tmp);
    }
}

void delectionbetw()
{
    if(start==NULL)
    {
        printf("LIST IS UNDERFLOW");
        return;
    }
    else
    {
        struct node *ptr1=NULL;
        ptr=start;
        printf("enter the data to delect");
        scanf("%d",&key);
        while(ptr !=NULL)
        {
            if(ptr->data==key)
            {
               if(ptr1!=NULL)
               {
                ptr1->link=ptr->link;
               }
               else
               {
                start=ptr->link;
               }
               free(ptr);
               printf("element with key %d delected\n",key);
               return;
    
            }
            else
            {
                ptr1=ptr ;
            }
            ptr=ptr->link;
        }
    }
    printf("Key %d not found in the list\n", key);
}

void delectend()
{
    if(start==NULL)
    {
        printf("LIST IS EMPTY");
    }
    else
    {
        ptr=start;
    q=NULL;
    while(ptr->link!=NULL)
    {
        q=ptr;
        ptr=ptr->link;
    }
    if(q->link!=NULL)
    {
        q->link=NULL;
    }
    else{
        start=NULL;

    }
    printf("delected element is %d",ptr->data);
    free(ptr);

    }
}


void display()
{
    if(start==NULL)
    {
        printf("LIST IS NULL");

    }
    else
    {
        ptr=start;
        printf("list is :\n");
        while(ptr !=NULL)
        {
            printf("%d ->",ptr->data);
            ptr=ptr->link;
        }
        printf("NULL \n)");

    }
}


void main()
{int choice;
    do{
        printf("\nMENU");
        printf("\n1:INSERTION AT BEGINNING \n2:INSERTION IN BETWEEN\n3:INSERTION AT END \n4 DELECTION AT BEGINNING \n5: DELECTION IN BETWEEN \n6: DELECTION IN END\n7: DISPLAY\n8: EXIT");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertionbeginning();break;
            case 2:insertionbet();break;
            case 3:insertionend();break;
            case 4:delectionbeg();break;
            case 5:delectionbetw();break;
            case 6:delectend();break;
            case 7:display();break;
            case 8:break;
        }
    }
    while(choice<=7);
}




