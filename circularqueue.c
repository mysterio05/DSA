#include<stdio.h>
int front=-1,rear=-1,i,n,y,queue[100],item;
void enqueue(int n)
{
    if((front==0 && rear==n-1)||(front==rear+1))
    {
        printf("QUEUE OVERFLOW");
    }
    else
    { 
        printf("enter the data");
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
            rear++;
        }
        queue[rear]=item;

    }
}

void deque(int n)
{
    if(front==-1)
    {
        printf("QUEUE UNDERFLOW");

    }
    else
    {
        y=queue[front];
    printf("delected element is %d",y);
        if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==n-1)
    {
        front=0;
    }
    else {
        front++;
    }

    }
}

void display(int n)
{
    if(front==-1)
    {
        printf("QUEUE IS EMPTY");
    }
    {
    if(front<=rear)
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }

    }
    else
    {
       for(i=front;i<n;i++)
       {
        printf("%d\t",queue[i]);
       }

        for(i=0;i<=rear;i++)
       {
        printf("%d\t",queue[i]);
       }
    }
    }
}


void main()
{
    int choice;
    printf("Enter the limit: ");
    scanf("%d", &n);
    do
    {
        printf("\nMenu\n1.Enque\n2.Deque\n3.Display\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            enqueue(n);
        }
        break;

        case 2:
        {
            deque(n);
        }
        break;

        case 3:
        {
            display(n);
        }
        break;

        default:
            break;
        }
    } while (choice != 4);
}

