#include<stdio.h>
#define max 5
int rear=-1;
int front=-1;
int Queue[max];
void Enqueue(int x)
{
    if(rear==max-1)
    {
        printf("Over flow\n");
    }
    else if(rear==-1 && front==-1)
    {
        rear=front=0;
        Queue[rear]=x;
    }
    else
    {
        rear++;
        Queue[rear]=x;
    }
}
void Dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("Under Flow\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}
void Peek()
{
    if(rear==-1 && front==-1)
    {
        printf("No Queue\n");
    }
    else
    {
        printf("%d\n",Queue[front]);
    }
}
void Display()
{
    if(rear==-1 && front==-1)
    {
        printf("NO QUEUE\n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",Queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    Enqueue(10);
    Enqueue(20);
    Display();
    Enqueue(30);
    Display();
    Peek();
    Dequeue();
    Display();
    return 0;
}
