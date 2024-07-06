#include<stdio.h>
#define max 10
int rear=-1;
int front=-1;
int Queue[max];
void Enqueue(int x)
{
    if((rear==max-1 && front==0)||(front==rear+1))
    {
        printf("Over Flow\n");
    }
    else{
        if(front==-1 && rear==-1)
            {
                front=rear=0;
                Queue[rear]=x;
            }
            else{
                rear=(rear+1)%max;
                Queue[rear]=x;
            }
        }
}
void Dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("UnderFlow");
    }
    else{
        if(front==rear)
        {
            front=rear=-1;
        }
        else{
            front=(front+1)%max;
        }
    }
}
void Display()
{
    if(front==-1 && rear==-1)
    {
        printf("NO QUEUE");
    }
    else{
            int i;
    for(i=front;i!=rear;i=(i+1)%max)
    {
        printf("%d ",Queue[i]);
    }
    printf("%d ",Queue[i]);
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
}
