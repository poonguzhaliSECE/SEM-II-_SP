#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void Enqueue(int x)
{
    struct node* nn = (struct node*)malloc(sizeof(struct node));
    nn->data=x;
    nn->next=NULL;
    if(rear==NULL && front==NULL)
    {
      rear=front=nn;
    }
    else
    {
        rear->next=nn;
        rear=nn;
    }
}
void Dequeue()
{
    if(rear==NULL && front==NULL)
    {
        printf("No Queue");
    }
    else
    {
        struct node *temp=front;
        front=front->next;
        free(temp);
    }
}
void Peek()
{
    if(rear==NULL && front==NULL)
    {
        printf("No Queue");
    }
    else
    {
        printf("%d\n",front->data);
    }
}
void Display()
{
    if(rear==NULL && front==NULL)
    {
        printf("No Queue\n");
    }
    else
    {
        struct node *temp=front;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
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
}
