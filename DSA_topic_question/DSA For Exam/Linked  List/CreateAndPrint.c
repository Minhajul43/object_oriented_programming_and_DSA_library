#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*next;
};
// function to create linked list
void printList(struct Node*head){
  struct Node*temp=head;
  while(temp!=NULL){
    printf("%d ->",temp->data);
    temp=temp->next;
  }
  printf("NULL");
}
int main()
{
  struct Node*head=NULL;
  struct Node*first=NULL;
  struct Node*second=NULL;
  struct Node*third=NULL;
  struct Node*four=NULL;
  struct Node*five=NULL;

  head=(struct Node*)malloc(sizeof(struct Node));
  first=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));
  four=(struct Node*)malloc(sizeof(struct Node));
  five=(struct Node*)malloc(sizeof(struct Node));
  head->data=10;
  head->next=first;

  first->data=20;
  first->next=second;

  second->data=20;
  second->next=third;

  third->data=20;
  third->next=four;

  four->data=20;
  four->next=five;

  five->data=20;
  five->next=NULL;
  printList(head);
  return 0;
}