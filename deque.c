#include<stdio.h>
int front=-1,rear=-1,i,y,item,n,queue[100];

void insertionrear(int n)
{
    if((front==0 && rear==n-1)||(front==rear+1))
    {
        printf("QUEUE OVERFLOW");

    }
    else{
        printf("enter the item");
        scanf("%d",&item);
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else if(rear==n-1)
        {
            rear=0;
        }
        else 
        {
            rear=rear+1;
        }
        queue[rear]=item;
    }
}

void delectionfront(int n)
{
    if(front==-1)
    {
    printf("QUEUE UNDERFLOW");
    }
    else{
       y=queue[front];
       printf("the deleceted element is %d",y);

       if(front==rear)
       {
        front=-1;
        rear=-1;

       }
       else if(front==n-1)
       {
        front=0;
       }
       else{
        front++;
       }
    }
}

void insertionfront(int n)
{
    if((front==0 && rear==n-1)||(front==rear+1))
    {
        printf("QUEUE OVERFLOW");

    }
    else{
        printf("enter the item");
        scanf("%d",&item);
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else if(front==0)
        {
            front=n-1;
        }
        else 
        {
            front=front-1;
        }
        queue[front]=item;
    }
}

void delectionrear(int n)
{
    if(front==-1)
    {
    printf("QUEUE UNDERFLOW");
    }
    else{
       y=queue[rear];
       printf("the deleceted element is %d",y);

       if(front==rear)
       {
        front=-1;
        rear=-1;

       }
       else if(rear==0)
       {
        rear=n-1;
       }
       else{
        rear--;
       }
    }
}

void display(int n)
{
    if(front==-1)
    {
        printf("QUEUE IS EMPTY");
    }
    else{
        if(front<=rear)
        {
            for(i=front;i<=rear;i++)
            {
                printf("%d \t",queue[i]);
            }
        }
       else { for(i=front;i<n;i++)
            {
                printf("%d \t",queue[i]);
            }

             for(i=0;i<=rear;i++)
            {
                printf("%d \t",queue[i]);
            }
       }
    }
}


void main()
{
    int choice,select;
    printf("enter the limit");
    scanf("%d",&n);
    do{
        printf("\n MAIN MENU");
        printf("\n1:INPUT RESTRICTED DEQUEUE \n2:OUTPUT RESTRICTED DEQUEUE");
        printf("\n ENTER THE OPTION");
        scanf("%d",&select);
        switch(select)
        {
            case 1: { do{ printf("\n INPUT RESTRICTED DEQUEUE ");
        printf("\n1:INSERTION THROUGH REAR \n2:DELECTION THROUGH FRONT \n3:DELECTION THROUGH REAR \n4:DISPLAY \n5:EXIT");
        printf("\n ENTER CHOICE");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertionrear(n);break;
            case 2:delectionfront(n);break;
            case 3:delectionrear(n);break;
            case 4:display(n);break;
            case 5:break;

        }
        } 
        while(choice<=4);
            } break;
             
        case 2:{ do{ printf("\n OUTPUT RESTRICTED DEQUEUE ");
        printf("\n1:INSERTION THROUGH REAR \n2:INSERTION THROUGH FRONT \n3:DELECTION THROUGH FRONT \n4:DISPLAY \n5:EXIT");
        printf("\n ENTER CHOICE");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertionrear(n);break;
            case 2:insertionfront(n);break;
            case 3:delectionfront(n);break;
            case 4:display(n);break;
            case 5:break;

        }
        } while(choice<=4);


        }break;
    }
    }
    while(select<=2);

}


