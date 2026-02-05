// now create a tree 
#include<stdio.h>
#include<stdlib.h>
struct Node{
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
