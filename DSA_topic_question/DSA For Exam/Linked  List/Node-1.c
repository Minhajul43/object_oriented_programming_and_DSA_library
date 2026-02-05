#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*next;
};

void printList(struct Node*head){
  struct Node*temp=head;
  while(temp!= NULL){
    printf("%d ->",temp->data);
    temp=temp->next;
  }
  printf("NULL");
}
int main(){
  struct Node*head=NULL;
  struct Node*first=NULL;
  struct Node*second=NULL;
  struct Node*third=NULL;

  head=(struct Node*)malloc(sizeof(struct Node));
  first=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));

  head->data=10;
  head->next=first;

  first->data=20;
  first->next=second;

  second->data=30;
  second->next=third;

  third->data=40;
  third->next=NULL;
  printList(head);
  return 0;
}