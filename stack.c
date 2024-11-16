#include<stdio.h>
int top=-1,item,stack[10],y,i,n;
int push(int n)
{
    if(top>=n-1)
    {
        printf("stack over flow");
    }
    else
    {
        printf("enter the item");
         scanf("%d",&item);
      top++;
      stack[top]=item;

    }
}

int pop(int n)
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    {
       y=stack[top];
       printf("delected element is %d",y);
       top--;
    }
}

void display()
{
    if(top==-1)
    {
    printf("stack is empty");
    }
    printf("\nStack is \n");
    for(i=top;i>=0;i--)
    {
     printf("%d \n",stack[i]);
    }
}

void main()
{ 
    int choice;
    printf("enter the size");
    scanf("%d",&n);


    do
    { 
        printf("MENU\n");
         printf("1:PUSH\n2:POP\n3:DISPLAY \n4:EXIT");
          printf("\n enter the choice");
          scanf("%d",&choice);

          switch(choice)
          {
           
            case 1:push(n); break;
             case 2:pop(n); break;
              case 3:display(); break;
              case 4:break;
          }

    
    } while (choice!=5);
    
}