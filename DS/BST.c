//c program for different tree traversals
#include<stdio.h>
#include<stdlib.h>
struct node
{
       int data;
       struct node *left;//a pointer to point left child
       struct node *right;//a pointer to point right child
};
//given data,left and right = NULL
struct node* newnode(int data)
{
       struct node* node=(struct node*)malloc(sizeof(struct node));
       node->data=data;
       node->left=NULL;
       node->right=NULL;
       return (node);
}
void inorder(struct node* node)
{
     if(node==NULL){
     return;
     }
     inorder(node->left);
     printf("%d",node->data);
     inorder(node->right);
     
} 
void preorder(struct node* node)
{
     if(node==NULL){
     return;
     }
     printf("%d",node->data);
     preorder(node->left);
     preorder(node->right);  
} 
void postorder(struct node* node)
{
     if(node==NULL){
     return;
     }
     postorder(node->left);
     postorder(node->right);
     printf("%d",node->data);
}     
int main()
{
    struct node *root = newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    printf("\nInorder Traversal\n");
    inorder(root);
    printf("\nPreorder Traversal\n"); 
    preorder(root); 
    printf("\nPostorder Traversal\n"); 
    preorder(root); 
}
