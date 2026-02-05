// Now a c program to traversing a tree data structure
#include<stdio.h>
#include<stdlib.h>
stuct Node{
  int data;
  struct Node* left;
  struct Node* right;

}
struct Node* createNode(int data){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=data;
  newNode->left=NULL;
  newNode->right=NULL;
  return newNode;
}
// Preorder traversing of tree
void Preorder(struct Node* root){
  if(root==NULL){
    return;
  }
  printf("%d  ",root->data);
  Preorder(root->left);
  Preorder(root->right);
}
// Inorder traversing of tree
void Inorder(struct Node* root){
  if(root==NULL){
    return;
  }
  Inorder(root->left);
  printf("%d  ",root->data);
  Inorder(root->right);
}
// Postorder traversing of tree 
void Postorder(struct Node* root){
  if(root==NULL){
    return;
  }
  Postorder(root->left);
  Postorder(root->right);
  printf("%d  ",root->data);
}


 /* Now we at first crearte a tree and then traversing it and every time we will input from user .for example: how many node you want to create and then input the value . then we input the user what he want to preorder or else;*/
 int main()
 {
  printf("This is a program of tree traversing or visiting\n");
  printf("How many node you want to create:");
  int n;
  scanf("%d",&n);
  struct Node* nodes[n];
  for(int i=0;i<n;i++){
    int value;
    printf("Enter the value of node no.%d:",i+1);
    scanf("%d",&value);
    nodes[i]=createNode(value);
  }
}
{
// Now we will link the nodes 
for(int i=0;i<n;i++){
  int leftIndex,rightIndex;
  printf("Enter the left and right child index of node no.%d (or -1 if no child)":,i+1);
  scanf("%d %d ",&leftIndex,&rightIndex);
  if(leftIndex!=-1){
    nodes[i]->left=nodes[leftIndex];
  }
  if(rghtIndex!=-1){
    nodes[i]->right=nodes[rightIndex];
  }

}
// Now we will traversing the tree 
int choice;
do{
  printf("\nMenu:\n 1. Preorder Traversing \n 2. Inorder Traversing \n 3. Postorder Traversing \n 4.Exit\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  switch(choice){
    case 1:
    printf("Preorder Traversing of tree:\n");
    Preorder(nodes[0]);
    break;
    case 2:
    printf("Inorder Traversing of tree:\n");
    Inorder(nodes[0]);
    break;
    case 3:
    printf("Postorder Traversing of tree:\n");
    Postorder(nodes[0]);
    break;
    case 4:
    printf("Exiting the program\n");
    break;
    defualt:
    printf("Invalid choice!! Please try again\n");

  }
}while(choice!=4);
return 0;

}
