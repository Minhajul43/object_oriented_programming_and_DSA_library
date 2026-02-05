#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*next;
};
void printList(struct Node*head){
  struct Node*temp=head;
  while(temp!=NULL){
    printf("%d --> ",temp->data);
    temp=temp->next;
  }
  printf("NULL");
}
int main()
{
  struct Node*head=NULL;
  struct Node*a=NULL;
  struct Node*b=NULL;
  struct Node*c=NULL;
  struct Node*d=NULL;
  struct Node*e=NULL;

  head=(struct Node*)malloc(sizeof(struct Node));
  a=(struct Node*)malloc(sizeof(struct Node));
  b=(struct Node*)malloc(sizeof(struct Node));
  c=(struct Node*)malloc(sizeof(struct Node));
  d=(struct Node*)malloc(sizeof(struct Node));
  e=(struct Node*)malloc(sizeof(struct Node));

 head->data=10;
 head->next=a;
 a->data=20;
 a->next=b;
 b->data=30;
 b->next=c;
 c->data=40;
 c->next=d;
 d->data=50;
 d->next=e;
 e->data=60;
 e->next=NULL;

 printList(head);
 return 0;
}