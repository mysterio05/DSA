#include<stdio.h> 
int rear=-1,front=-1,i,n,y,item,queue[100];
int enque(int n)
{
    if(rear>=n-1)
    {
        printf("queue overflow");
    }
    else{
        
        rear=rear+1;
        printf("enter the item ");
        scanf("%d",&item);
        queue[rear]=item;
       if(front==-1)
        {
            front=0;
        }
    }
     
}

int deque(int n)
{
    if(front==-1)
    {
        printf("queue underflow");

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
        else 
        front++;
        

    }
}

int display()
{
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue is \n");
        for(i=front ;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }

}

void main()
{ 
    int choice;
    printf("enter the size of queue");
    scanf("%d",&n);


    do
    { 
        printf("MENU\n");
         printf("1:ENQUEUE\n2:DEQUEUE\n3:DISPLAY \n4:EXIT");
          printf("\n enter the choice");
          scanf("%d",&choice);

          switch(choice)
          {
           
            case 1:enque(n); break;
             case 2:deque(n); break;
              case 3:display(); break;
              case 4:break;
          }

    
    } while (choice!=5);
    
}